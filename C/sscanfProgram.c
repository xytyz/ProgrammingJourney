#include <stdio.h>

int main(){

    char str[]= "October 17 2022";
    char m[10];
    int d,y;
    sscanf(str,"%s %d %d", m,&d,&y);

    printf( " The date is %d %s %d", d,m,y);

    return 0;

}