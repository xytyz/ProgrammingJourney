#include <stdio.h>

int main() {
    int a=3, po=10,num=1;
    printf("Base number: %d\n",a);
    printf("Power: %d\n",po);

    while(po != 0){
        num*=a;
        po--;
    }
    printf("Result: %d \n",num);
    return 0;
}