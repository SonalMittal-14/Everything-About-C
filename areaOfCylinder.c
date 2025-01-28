#include<stdio.h>

int main(){
    float pie = 3.14;
    float height;
    float radius;

    printf("Enter the Radius : ");
    scanf("%f",&radius);

    printf("Enter the height : ");
    scanf("%f", &height);

    float areaOfCylinder = pie * radius * radius * height;
    printf("Area of Circle : %f", areaOfCylinder);
    return 0;
}