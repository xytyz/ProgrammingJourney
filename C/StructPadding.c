#include <stdio.h>
#include <stdlib.h>

struct Time{
    int hour;
    int minute;
    double second;
    char a;
};

int main(){
    struct Time a = {12,34,50};
    printf("%d",sizeof(struct Time));
}