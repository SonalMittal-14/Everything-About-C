// https://leetcode.com/problems/length-of-last-word/description/?envType=problem-list-v2&envId=string

// Length of the last word 

#include <stdio.h>
#include <string.h>

int lastWord(char* s) {
    int i = strlen(s) - 1, length = 0;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0; 
    
    printf("Length of last word: %d\n", lastWord(str));
    
    return 0;
}
