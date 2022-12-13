#include <stdio.h>

int reversenumb(int num){
    int reversed=0, remainder=0;
    while (num != 0){
        remainder = num % 10; 
        printf("\n %d",remainder);
        reversed = reversed * 10 + remainder;
        printf("   %d",reversed);
        num = num/10;
    }    
    return reversed;
    }

int main(){
    int foo=123456;  
    printf("\n Original Number= %d",foo);
    printf("\n Reversed Number= %d",reversenumb(foo));
}