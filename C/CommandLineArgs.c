#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{   int i;
    char *str = malloc( strlen( argv[ i ] ) + 1 );
    if( argc >= 2 )
        strcpy(str, argv[1]);
    else
        printf("argument list is empty.\n");
    free(str);
    return 0;
}