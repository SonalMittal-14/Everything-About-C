#include<stdio.h>

int main(){
    float pie = 3.14;
    float radius;
    printf("Enter the Radius : ");
    scanf("%f",&radius);
    float areaOfCircle = pie * radius * radius;
    printf("Area of Circle : %f", areaOfCircle);
    return 0;
}