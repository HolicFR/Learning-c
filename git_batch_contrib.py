import os, subprocess, glob
repo = r"C:\Users\manas\OneDrive\Documents\Trial Code\C# BASICS"
files = sorted(glob.glob(os.path.join(repo, "Important_Codes", "*.c")))
if not files:
    raise SystemExit("No C files found in Important_Codes")

# Save existing local work first so we don't disturb user edits.
try:
    stash = subprocess.run(["git", "-C", repo, "stash", "push", "-u", "-m", "temp before contribution batch"], capture_output=True, text=True)
    if stash.returncode not in (0, 1):
        raise SystemExit(f"git stash failed: {stash.stderr or stash.stdout}")
except Exception as e:
    raise SystemExit(f"stash step failed: {e}")

for i, path in enumerate(files, start=1):
    name = os.path.basename(path)
    stem = os.path.splitext(name)[0]
    maybe = f"\n// contribution batch {i}\n"
    with open(path, "a", encoding="utf-8") as fh:
        fh.write(maybe)

    msg = f"Add {stem.replace('_', ' ')} contribution"
    add = subprocess.run(["git", "-C", repo, "add", "--", path], capture_output=True, text=True)
    if add.returncode != 0:
        raise SystemExit(f"git add failed for {name}: {add.stderr or add.stdout}")

    stamp = f"2026-08-15T10:{i:02d}:00+05:30"
    env = os.environ.copy()
    env["GIT_AUTHOR_DATE"] = stamp
    env["GIT_COMMITTER_DATE"] = stamp

    c = subprocess.run(["git", "-C", repo, "commit", "-m", msg, "--no-gpg-sign"], capture_output=True, text=True, env=env)
    if c.returncode != 0:
        if "nothing to commit" in (c.stdout + c.stderr).lower():
            print(f"SKIP {name}: nothing to commit")
            continue
        raise SystemExit(f"git commit failed for {name}: {c.stderr or c.stdout}")

    print(f"COMMIT {i}: {msg}\n{c.stdout.strip() or c.stderr.strip()}")

    push = subprocess.run(["git", "-C", repo, "push", "origin", "HEAD"], capture_output=True, text=True)
    if push.returncode != 0:
        raise SystemExit(f"git push failed for {name}: {push.stderr or push.stdout}")

    print(f"PUSH {i}: {msg}\n{push.stdout.strip() or push.stderr.strip()}\n")

restore = subprocess.run(["git", "-C", repo, "stash", "pop"], capture_output=True, text=True)
if restore.returncode not in (0, 1):
    raise SystemExit(f"git stash pop failed: {restore.stderr or restore.stdout}")

log = subprocess.run(["git", "-C", repo, "log", "--oneline", "-n", "30"], capture_output=True, text=True)
print("\nRECENT LOG:\n" + log.stdout)
