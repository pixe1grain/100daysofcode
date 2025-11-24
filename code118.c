#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    printf("%d", total - sum);
    return 0;
}