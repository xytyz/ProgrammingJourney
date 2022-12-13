#include <stdio.h>

void ispalindrome(int a){
    int reversed=0, remainder=0,num=a;

    while (num != 0){
        remainder = num % 10; 
        reversed = reversed * 10 + remainder;
        num = 
        num/10;
    }    
    if(reversed == a)
        {printf("The Number is a Palindrome. \n");}
    else
        {printf("The Number is NOT a Palindrome. \n");}
}

int main(){
    int num = 1234;
    printf("number inputted= %d \n",num);
    ispalindrome(num);
}