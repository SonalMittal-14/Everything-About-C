// https://leetcode.com/problems/valid-palindrome/description/?envType=problem-list-v2&envId=string

// Valid Palindrome

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindrome(char* s) {
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j) {
        char a = tolower(s[i]);
        char b = tolower(s[j]);

        if (isalnum(a) && isalnum(b)) {
            if (a != b) {
                return 0;
            }
            i++;
            j--;
        } 
        else if (!isalnum(a)) {
            i++;
        } 
        else if (!isalnum(b)) {
            j--;
        }
    }
    
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0; 
    
    if (palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
