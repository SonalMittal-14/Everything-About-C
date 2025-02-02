// https://www.codechef.com/practice/course/c/PCL03/problems/ONEFULPAIRS

// Oneful Pairs

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Your code goes here (if needed)
    int sum = a + b + (a*b);
    if(sum == 111){
        printf("Yes");
    }else{
        printf("No");
    }

}
