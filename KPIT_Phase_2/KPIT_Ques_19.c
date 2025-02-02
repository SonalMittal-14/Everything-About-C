// https://leetcode.com/problems/3sum-closest/description/?envType=problem-list-v2&envId=array

// 3Sum Closet

#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int threeSum(int nums[], int n, int target) {
    qsort(nums, n, sizeof(int), compare);
    
    int closestSum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];

            if (abs(currentSum - target) < abs(closestSum - target)) {
                closestSum = currentSum;
            }

            if (currentSum > target) {
                right--; 
            } else if (currentSum < target) {
                left++; 
            } else {
                return target; 
            }
        }
    }

    return closestSum;
}

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target value: ");
    scanf("%d", &target);

    int result = threeSum(nums, n, target);
    printf("The closest sum to %d is: %d\n", target, result);

    return 0;
}
