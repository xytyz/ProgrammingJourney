#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={0,1,2,3,4};
    int *ptr = arr;

    printf("%d \n", *ptr++);
        printf("\t %d \n", *ptr);
    
    printf("%d \n",(*ptr)++);
    
    printf("%d \n", *ptr);
    printf("-----\n");

    printf("%d \n", *++ptr);
        printf("\t %d \n", *ptr);
    
    printf("%d \n", ++*ptr);
        printf("\t %d \n", *ptr);
    printf("\n");
    int i;
    for ( i = 0; i < (sizeof(arr)/4); i++)
    {
        printf("%d",arr[i]);
    }
    
}