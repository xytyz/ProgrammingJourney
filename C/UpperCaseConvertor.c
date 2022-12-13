#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int flen(FILE *fptr){
    fseek(fptr,0,SEEK_END);
    int len = ftell(fptr);
    rewind(fptr);
    return len;
}
void show(FILE *fptr){
    int len=flen(fptr);
    for(int i=0;i<len;i++){
            char c = fgetc(fptr);
            printf("%c",c);}
}
void Upcase(FILE *fptr){
    int len=flen(fptr);
    char str[100];
    int i=0;

    for(int i=0;i<=len;i++){
        str[i] = fgetc(fptr);
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;}
    }
    rewind(fptr);
    while(i<len){
        fputc(str[i],fptr);
        i++;
    };
}

int main(){
    FILE *fi;
    int len,i;
    fi  = fopen("test.txt","r+");
    if(fi == NULL)
        return 0;
    else{
        show(fi);
        printf("\n");
        Upcase(fi);
        show(fi);
    }
    fclose(fi);
    return 0;
}