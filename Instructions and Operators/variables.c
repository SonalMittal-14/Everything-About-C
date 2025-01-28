#include<stdio.h>

int main(){
    int i = 10;
    int j = i;
    printf("The value of i is %d and the value if j is %d.\n ", i,j);

    int a = 3;
    int b = 6;
    int c = a+b;
    printf("The value of a is %d.\nThe value of b is %d.\nAnd their Sum is : %d.\n",a,b,c);
    printf("The remainder when a is divided by b is : %d\n", a%b);

    // Use pow() for exponentiation
    double d = pow(b, a); // pow() returns a double, so use double or cast to int
    printf("The value of b raised to the power a is: %.2f\n", d);

    
    return 0;
}