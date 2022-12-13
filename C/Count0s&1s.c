#include <stdio.h>

int countOnes(int a)
{  int count = 0;
   while (a)
    {  if ((a & 1) == 1)
            count++;
        a = a >> 1;}
    return count;
}
int countZeroes(int a)
{  int count = 0;
   while (a)
    {  if ((a & 1) ==0)
            count++;
        a = a >> 1;}
    return count;
}

int countBits(int a)
{  int count = 0;
   while (a)
   {    count++;
        a >>= 1;
    }
    return count;
}
void binary(int n){
    int i;
    for (i = 1 << (countBits(n)-1); i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main(){
    int A = 0b11100101;
    printf("Number inputted:"); binary(A); printf("\n");
    printf("Number of Bits: %d \n", countBits(A));
    printf("Number of Ones: %d \n", countOnes(A));
    printf("Number of Zeroes: %d", countZeroes(A));
    return 0;
}