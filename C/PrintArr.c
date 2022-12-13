#include <stdio.h>
void printarr(int arr[2][2]){
    int i,j;
    for ( i = 0; i < 2; i++)
    {   for ( j = 0; j < 2; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");}
}
int main(){
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{1,9},{-3,-5}};
    int sum[2][2] = {0};
    int i,j,h = (sizeof(a)>sizeof(b))? sizeof(a)/4: sizeof(b)/4;
    for(i=0; i<2;i++){
        for(j = 0; j<2;j++){
            sum[i][j]= a[i][j]+b[i][j];}}
    printf("A is: \n");
    printarr(a);
    printf("B is: \n");
    printarr(b);
    printf("Sum is: \n");
    printarr(sum);
return 0;    
}