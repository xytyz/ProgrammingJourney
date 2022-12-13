#include <stdio.h>

int checkPrime(int num){
    int isprime=0;

    if(num==0 || num==1)
        isprime = 1;

    for(int i =2; i<=num/2;i++){
        if(num%i == 0){
            isprime = 1;
            break;}
    }
    if( isprime==0)
        printf("Prime \n");
    else
        printf("Not Prime \n");
    return 0;
}

int main(){
    int foo=51;
    printf("\n Original Number= %d \n",foo);
    checkPrime(foo);
    }