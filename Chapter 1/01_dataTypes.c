#include <stdio.h>

int main()
{
    int a = 1;
    float b = 1.8;
    char c = 's';

    printf("Size of the int : %zu  bytes \n", sizeof(int));
    printf("Size of the char : %zu  bytes \n", sizeof(char));
    printf("Size of the float : %zu  bytes \n", sizeof(float));
}