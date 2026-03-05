// This program reverses a string entered by the user.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100],n;
    printf("Enter a string: ");
    scanf("%s", str);
    n = strlen(str);
    printf("Reversed string: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}