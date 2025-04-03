#include<stdio.h>

int main(){
    int a;
    printf("Enter first Number: ");
    scanf("%d", &a);

    int b;
    printf("Enter Second Number: ");
    scanf("%d", &b);

    int c;
    printf("Enter Third Number: ");
    scanf("%d", &c);

    int d;
    printf("Enter fourth Number: ");
    scanf("%d", &d);

    if(a>b && a>c && a>d){
        printf("First Number is Greatest.");
    }else if(b>a && b>c && b>d){
        printf("Second Number is Greatest.");
    }else if(c>a && c>b && c>d){
        printf("Third Number is Greatest");
    }else{
        printf("Fourth Number is Greatest.");
    }
    return 0;
}