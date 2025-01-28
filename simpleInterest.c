#include<stdio.h>

int main(){
    float p;
    printf("Enter the Principal Amount : ");
    scanf("%f", &p);

    int rate;
    printf("Enter the annual interst rate : ");
    scanf("%d",&rate);

    int time;
    printf("Enter the time : ");
    scanf("%d", &time);

    float simpleInterest = (p*rate*time) / 100 ;
    printf("The Simple Interest : %f", simpleInterest);
    return 0;
}