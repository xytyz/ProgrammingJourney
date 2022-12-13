#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;
    FILE *ftemp;
    int len,count,i=0;
    char username[]= "Xytyz";
    char str[100];
    char code[]="USER";

    fptr  = fopen("test.txt","r+");
    ftemp  = fopen("output.txt","w+");

    if(fptr == NULL || fptr == NULL)
        return 0;
    else{

        rewind(fptr);
        while (!feof(fptr)) {
            fscanf(fptr, "%s", str);
            if (strcmp(str, code) == 0) {
                for (i = 0; username[i] != '\0'; i++) {
                    str[i] = username[i];
                }
            }
            fprintf(ftemp, "%s ", str);
        }
    }
    fclose(fptr);
    fclose(ftemp);
    return 0;
}