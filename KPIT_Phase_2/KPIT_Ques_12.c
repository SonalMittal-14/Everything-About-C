// https://www.codechef.com/practice/course/c/LPCAS11/problems/LCAS110

// Reverse a Number

#include <stdio.h>

int main() {
	// your code goes here
	int number;
	scanf("%d", &number);
	
	int reverseNumber = 0;
	int remainder;
	
	while(number != 0){
	    remainder = number % 10;
	    reverseNumber = reverseNumber * 10 + remainder;
	    number /= 10;
	}
	
	printf("%d", reverseNumber);

}

