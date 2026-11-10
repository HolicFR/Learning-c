#include <stdio.h>
#include <string.h>
int main(void){ char s[100]; printf("Enter a string: "); scanf("%s", s); int len = strlen(s), ok = 1; for(int i = 0; i < len / 2; i++){ if(s[i] != s[len - i - 1]){ ok = 0; break; } } printf(ok ? "Palindrome\n" : "Not palindrome\n"); return 0; }
