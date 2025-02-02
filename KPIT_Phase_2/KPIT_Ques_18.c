// https://leetcode.com/problems/median-of-two-sorted-arrays/description/?envType=problem-list-v2&envId=array

// Median of Two Sorted Arrays

#include <stdio.h>
#include <stdlib.h>


void mergeArray(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i, j, k;
    i = j = k = 0;

    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


double findMedian(int arr[], int size) {
    if (size % 2 == 1) {
        return arr[size / 2];
    } else {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0; 
    }
}

int main() {
    int n1, n2;

    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d sorted elements: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    
    printf("Enter %d sorted elements: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = n1 + n2;
    int merged[mergedSize];
    mergeArrays(arr1, n1, arr2, n2, merged);

    
    qsort(merged, mergedSize, sizeof(int), compare);

    
    double median = findMedian(merged, mergedSize);
    printf("The median of the merged sorted arrays is: %.2f\n", median);

    return 0;
}
