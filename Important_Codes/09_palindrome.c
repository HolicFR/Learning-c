#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("%s\\n", isPalindrome ? "Palindrome" : "Not a palindrome");
    return 0;
}

// contribution batch 9
