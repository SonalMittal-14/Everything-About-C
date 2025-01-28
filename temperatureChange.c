#include<stdio.h>

int main(){
    float c;
    printf("Enter the celcius temperature : ");
    scanf("%f", &c);

    float f;
    f = ((9.0/5.0)*c) + 32;

    printf("The value in Fahrenheit is : %f", f);

    return 0;
}