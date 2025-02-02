// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array

// Remove Dublicate from Sorted Array 

#include <stdio.h>

int duplicateInArray(int arr[], int size) {
    if (size == 0) return 0;

    int left = 0;

    for (int right = 1; right < size; right++) {
        if (arr[left] != arr[right]) {
            left++;
            arr[left] = arr[right];
        }
    }

    return left + 1;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newArray = duplicateInArray(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newArray; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNew size of the array: %d\n", newArray);

    return 0;
}
