#include<stdio.h>

int main(){
    char grade;
    printf("Enter the garde : ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        printf("your marks is between 90-100");
        break;
        case 'B':
        printf("your marks is between 80-90");
        break;
        case 'C':
        printf("your marks is between 70-80");
        break;
        case 'D':
        printf("your marks is between 60-70");
        break;
        case 'E':
        printf("your marks is between 50-60");
        break;
        case 'F':
        printf("Your marks are less than 50.");
        break;
        default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}