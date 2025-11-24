#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum subarray sum of size %d is: %d", k, maxSum);
    return 0;
}