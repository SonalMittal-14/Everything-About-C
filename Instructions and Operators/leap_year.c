#include<stdio.h>

int main(){
    int year;
    printf("Enter Year : \n");
    scanf("%d", &year);

    if((year%4 == 0 && year%100 != 100) || year%400==0){
        printf("This year is a leap year.");
    }else{
        printf("This is not Leap year.");
    }
    return 0;

}