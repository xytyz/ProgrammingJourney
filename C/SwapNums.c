#include <stdio.h>

void swap(int *a, int *b){

    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=69, b = 420;
    printf("%d %d \n",a,b);

    swap(&a,&b);
    printf("%d %d \n",a,b);
    return 0;
}