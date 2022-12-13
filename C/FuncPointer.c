#include <stdio.h>

int add( int a,int b){
    return a+b;}

int sub( int a,int b){
    return a-b;}

int mul( int a,int b){
    return a*b;}

int div( int a,int b){
    return a/b;}

int main(){
    int a=60,b=10;
    int (*fun)(int,int); 

    // fun = add;
    printf(" \n add = %d",fun=add(a,b));
    // fun = sub;
    printf(" \n sub = %d",fun=sub(a,b));
    // fun = mul;
    printf(" \n mul = %d",fun=mul(a,b));
    // fun = div;
    printf(" \n div = %d",fun=div(a,b));
    return 0;
}