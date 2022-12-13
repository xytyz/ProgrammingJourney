#include <stdio.h>
#include <stdlib.h>

struct student{
    int roll;
    char name[10];
};

void show(FILE *fptr){
    fseek(fptr,0,SEEK_END);
    int len = ftell(fptr);
    rewind(fptr);
    for(int i=0;i<len;i++){
            char c = fgetc(fptr);
            for( int i = 7; i >= 0; i-- ) {
                printf( "%d", ( c >> i ) & 1 ? 1 : 0 );
            }
            printf(" ");
    }
}
int main(){
    FILE *file = fopen("sample.txt","w+");
    if (file == NULL)
        return 0;
    struct student arr[2]={
        {1,"A"},{2,"B"}
    };
    fprintf(file," %d %s  %d %s", arr[0].roll,arr[0].name,arr[1].roll,arr[1].name);
    show(file);
    fclose(file);
    return 0;
}