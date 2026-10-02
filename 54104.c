#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int i = 1; i <= x; i++) {
            leftSum = leftSum + i;
        }

        for (int i = x; i <= n; i++) {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}