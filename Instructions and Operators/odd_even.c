#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : \n");
    scanf("%d",&a);
    if(a%2==0){
        printf("Number is even");
    }else{
        printf("Number is odd.");
    }
}