// this program concatenates teh strings without using strcat() function.
#include <stdio.h>
int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    void concat(char result[], const char str1[], const char str2[]) {
    
        int i = 0, j = 0;
        while (str1[i] != '\0') {
            result[i] = str1[i];
            i++;
        }
        while (str2[j] != '\0') {
            result[i] = str2[j];
            i++;
            j++;
        }
        result[i] = '\0'; // Null-terminate the result string.
    }  
    char result[200]; // Make sure this is large enough for the concatenated string.
    concat(result, str1, str2);
    printf("result of concatenation :%s", result);
    return 0;
} 