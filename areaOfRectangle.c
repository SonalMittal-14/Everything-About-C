#include<stdio.h>

int main(){
    int l;
    printf("Enter the length of rectangle : ");
    scanf("%d", &l);
    int b;
    printf("Enter the breath of rectangle : ");
    scanf("%d", &b);
    int area = l*b;
    printf("The area of rectangle is : %d",area);
}