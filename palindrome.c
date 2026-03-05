// This program does palindrome checking for a string entered by the user.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    int isPalindrome = 1; 
    for (int i = 0; i < n; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0; 
            break;
        }
        if (isPalindrome) {
            printf("The string is a palindrome.\n");
        } else {
            printf("The string is not a palindrome.\n");
        }
        return 0;
    }
} 