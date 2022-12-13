#include <stdio.h>

struct complex {
    int i;
    char c;
};

void swap(struct complex *a, struct complex *b){

    struct complex temp = *a;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    struct complex a;
    a.i=10;
    a.c='A';
    struct complex b;
    b.i=88;
    b.c='B';

    printf("The Structure A has \t i= %d \t c= %c \n",a.i,a.c);
    printf("The Structure B has \t i= %d \t c= %c \n",b.i,b.c);
    swap (&a,&b);
    printf("--------\nThe Structure A has \t i= %d \t c= %c \n",a.i,a.c);
    printf("The Structure B has \t i= %d \t c= %c \n",b.i,b.c);
}