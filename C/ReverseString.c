#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str1)  
{   int i, length;
    char temp;  
    length = strlen(str1); 
    for (i = 0; i < length/2; i++){  
        temp = str1[i]; 
        str1[i] = str1[length - i - 1];  
        str1[length - i - 1] = temp;  
    }  
}

int main(int argc, char *argv[])
{   char *str = malloc( strlen( argv[ 1 ] ) + 1 );
    if( argc >= 2 )
    {   strcpy(str, argv[1]);
        reverse(str);
        printf("The reversed string is:\n");
        printf("%s\t", str);
    }
    else
        printf("argument list is empty.\n");
    free(str);
    return 0;
}
