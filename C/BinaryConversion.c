#include <stdio.h>
#include <stdlib.h>

int countBits(int a)
{  int count = 0;
   while (a)
   {    count++;
        a >>= 1;
    }
    return count;
}
void bin(int n)
{
    int i;
    for (i = 1 << (countBits(n)-1); i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main(){
    int A = 0b11100101;
    int count=0;
    count = countBits(A);
    printf("Binary is: ");
    bin(A);
    printf("\n");
    while(count !=0){
        A= A^1<<count-1;
        count--; 
    }
    printf("Binary is: ");
    bin(A);
    return 0;
}