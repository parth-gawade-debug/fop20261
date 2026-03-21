// in this program i found the length of any string  without using  strlen() function.
#include <stdio.h>
int main() {
    int string_length(const char string[]) 
    {
        int length = 0;
        while (string[length] != '\0') {
            length++;
        }
        return length;
    }
    const char word[] = "Hello, World!";
    printf("The length of the string \"%s\" is: %d\n", word, string_length(word));
    return 0;
}
