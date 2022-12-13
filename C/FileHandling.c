#include <stdio.h>
#include <string.h>

void show(FILE *fptr){
    fseek(fptr,0,SEEK_END);
    int len = ftell(fptr);
    fseek(fptr,0,SEEK_SET);
    for(int i=0;i<len;i++){
            char c = fgetc(fptr);
            printf("%c",c);}
}
void tell(FILE *fptr, const char* text){
    int i=0;
    fseek(fptr,0,SEEK_END);
    do{
        fputc(text[i],fptr);
        i++;
    }while(i<strlen(text));
}

int main(){
    FILE *fi;
    int len,i;
    fi  = fopen("test.txt","r+");
    if(fi == NULL)
        return 0;
    else{
        tell(fi," Young Padawan");
        show(fi);
    }
    fclose(fi);
    return 0;
}