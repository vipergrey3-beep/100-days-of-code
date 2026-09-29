#include <stdio.h>

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d %d\n", first, last);

    return 0;
}