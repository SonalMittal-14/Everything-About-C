#include<stdio.h>

int main(){
    char value;
    printf("Enter any character : ");
    scanf("%c", &value);
    printf("The value of character is : %d\n", value);

    if(value >= 97 && value <= 122){
        printf("The given character is in Lower case.");
    }else{
        printf("The given character is not in Lower Case.");
    }
    return 0;
}