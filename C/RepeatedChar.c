#include <stdio.h>
#include <string.h>

int repeatedchar(char *str ){
    int repeat = -1, i, j;
    int h = sizeof(str) -2;
    for (i = 0; i < h; i++) {
        for (j = i + 1; j < h;j++) {
            if (str[i] == str[j]) {
                repeat = i;
                break;}}
        if (repeat != -1)
            break;
    }
    return repeat;
}

int main(){
    char str[]="Kshitij";
    int isrepeated=repeatedchar(str);

    if (isrepeated != -1)
        printf(" this is the first repeated character: %c\n",str[isrepeated]);
    else 
        printf("String has no repeated characters \n");
}