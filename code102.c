#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    int index = ceilIndex(arr, n, x);
    printf("Ceil index: %d", index);

    return 0;
}