#include <stdio.h>

int findPivot(int n) {
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = (n * (n + 1) / 2) - ((x - 1) * x / 2);

        if (leftSum == rightSum)
            return x;
    }
    return -1;
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivot(n);
    printf("Pivot integer: %d", pivot);

    return 0;
}