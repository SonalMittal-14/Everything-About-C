// https://leetcode.com/problems/4sum/description/?envType=problem-list-v2&envId=array

// 4 SUM 

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void fourSum(int nums[], int n, int target) {
    qsort(nums, n, sizeof(int), compare);

    int found = 0;

    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int left = j + 1, right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    printf("[%d, %d, %d, %d]\n", nums[i], nums[j], nums[left], nums[right]);
                    found = 1;

                    int low = nums[left], high = nums[right];
                    while (left < right && nums[left] == low) left++;
                    while (left < right && nums[right] == high) right--;
                } 
                else if (sum > target) {
                    right--; 
                } 
                else {
                    left++; 
                }
            }
        }
    }

    if (!found) {
        printf("No quadruplet found.\n");
    }
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

    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Quadruplets with sum %d:\n", target);
    fourSum(nums, n, target);

    return 0;
}
