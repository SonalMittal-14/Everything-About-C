// https://www.codechef.com/practice/course/c/LPCAS03/problems/CASS20

// BMI Calculator

#include <stdio.h>

int main() {
    float height = 1.82;
    float weight = 72;
    // Complete the code
    float bmi;
    bmi = weight/(height*height);
    printf("%f",bmi);
    
    return 0;
}
