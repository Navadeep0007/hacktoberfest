#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int low = 0, mid = 0, high = numsSize - 1;
    int temp;

    while (mid <= high) {
        if (nums[mid] == 0) {
            // Swap nums[low] and nums[mid]
            temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            // Swap nums[mid] and nums[high]
            temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
    }
}

int main() {
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    sortColors(nums, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
