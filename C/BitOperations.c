#include <stdio.h>
#include <stdlib.h>

void bin(int n){
    int i;
    for (i = 1 << 7; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    printf("\n");
}

int main(){
    int A = 240;
    int tog=2,set=4,reset=7;
    printf("A is: \n");
    bin(A);
    printf("Toggle bit %d: \n",tog);
    A= A^1<<tog-1;
    bin(A);
    printf("Set bit %d: \n",set);
    A= A|1<<set-1;
    bin(A);
    printf("Reset bit %d: \n",reset);
    A= A&~(1<<reset-1);
    bin(A);
}