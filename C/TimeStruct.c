#include <stdio.h>
#include <stdlib.h>
struct Time{
    int hour;
    int minute;
    int second;
};

int timeDiff(struct Time *res,struct Time *a,struct Time *b){
    res->second= abs((a->second)-(b->second));
    while(res->second> 60){
        res->second - 60;
        res->minute++;
    }
    res->hour+= abs((a->hour)-(b->hour));
    while(res->minute> 60){
        res->minute - 60;
    }
    res->minute+= abs((a->minute)-(b->minute));
    while(res->hour> 24){
        res->hour - 24;
    }
    return 0;
}
int main(){
    struct Time a = {12,34,50};
    struct Time b = {10,15,5};
    struct Time res ={0};
    printf("The Time A has \t hour= %d \t minute= %d \t seconds= %d\n",a.hour,a.minute,a.second);
    printf("The Time B has \t hour= %d \t minute= %d \t seconds= %d\n",b.hour,b.minute,b.second);
    printf("--------\n");
    timeDiff (&res,&b,&a);
    printf("The Time difference is \t hour= %d \t minute= %d \t seconds= %d\n",res.hour,res.minute,res.second);
    return 0;}