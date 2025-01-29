#include<stdio.h>

int main(){
    int n = 45;
    float m = 34.98;
    n = (int) m;
    printf("The value of m is : %d\n",n);
    

    float a = 3.0;
    int b = 8;
    int c = 2;
    printf("%f\n",a/b-c);

    int h = 345678;
    printf("the value of h%97 is : %d\n", h%97);
    int g = 3349895;
    printf("the value of g%97 is : %d", g%97);

    return 0;
}