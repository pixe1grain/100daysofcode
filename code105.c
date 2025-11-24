#include <stdio.h>

int findMajority(int nums[], int n) {
    int candidate = -1, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            freq++;
    }

    if (freq > n / 2)
        return candidate;

    return -1;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findMajority(nums, n);
    printf("Majority element: %d", result);

    return 0;
}