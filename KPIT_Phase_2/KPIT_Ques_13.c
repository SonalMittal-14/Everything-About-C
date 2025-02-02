// https://www.codechef.com/practice/course/c/LPCAS11/problems/CASS34?tab=solution

// Prime Check

#include <stdio.h>

int main() {
    int number, a = 2;
    
    scanf("%d", &number);

    if (number <= 1) {
        printf("NO");
    } else {
        int prime = 1;
        while (a <= number / 2) {
            if (number % a == 0) {
                prime = 0;
                break;
            }
            a++;
        }
        if (prime) {
            printf("YES");
        } else {
            printf("NO");
        }
    }

    return 0;
}
