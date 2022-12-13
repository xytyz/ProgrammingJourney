#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = { "xyyx" };
    int i = 0;
    int h = sizeof(str) -2;

    while (h >= i) {
        if (str[i++] != str[h--]) {
            printf("\n %s is not a palindrome \n", str);
            return 0;
        }
    }
 
    printf("%s is a palindrome\n", str);
 
    return 0;
}