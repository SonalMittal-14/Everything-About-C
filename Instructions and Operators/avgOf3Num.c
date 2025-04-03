#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("Enter first number : \n");
    scanf("%d",&x);
    printf("Enter second number : \n");
    scanf("%d",&y);
    printf("Enter third number : \n");
    scanf("%d",&z);
    int avg;
    avg = (x+y+z)/3;
    printf("Average of three number is : %d\n",avg);
    return 0;
}