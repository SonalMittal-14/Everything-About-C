// https://www.codechef.com/practice/course/c/PCL05/problems/GDTURN

// Good Turn

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y;

      
        scanf("%d %d", &x, &y);

        // Your code for each test case goes here 
        int sum = x+y;
        
        if(sum > 6){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
