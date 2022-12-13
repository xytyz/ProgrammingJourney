#include <stdio.h>

int fibo(int x){
    static int a=0,b=1,c=0;
    if(x>0){
        c= a+b;
        a = b;
        b = c;
        printf("%d ",a);
        fibo(x-1);
    }
}

int main(){
    int n=10;
    fibo(n);
    return 0;
}