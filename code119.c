#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], freq[100000] = {0};
    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}