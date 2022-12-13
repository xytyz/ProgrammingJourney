#include<stdio.h>
#define mul(a,b) a*b

int main()
{
int a,b,c;
printf("enter two numbers: \n");
scanf("%d%d",&a,&b);
c = mul(a,b);
printf("%d",c);
return 0;
}
