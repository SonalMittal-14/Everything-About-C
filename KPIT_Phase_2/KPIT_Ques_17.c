// https://leetcode.com/problems/missing-number/solutions/2081201/c-short-w-3-approaches-o-1-space/?envType=problem-list-v2&envId=array

// Missing Number

#include <stdio.h>

int missingNum(int arr[], int size) {
    int sum = 0;
    int total = size * (size + 1) / 2;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return total - sum; 
}

int main() {
    int n;
    
    printf("Enter the number of elements (excluding the missing number): ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d elements (0 to %d, but one is missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);

    return 0;
}
