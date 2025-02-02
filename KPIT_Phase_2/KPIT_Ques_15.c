// https://leetcode.com/problems/contains-duplicate/description/?envType=problem-list-v2&envId=array

// Contains Duplicate

#include <stdio.h>

int duplicate(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return 1; 
            }
        }
    }
    return 0;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (duplicate(arr, n)) {
        printf("YES\n"); 
    } else {
        printf("NO\n");
    }

    return 0;
}
