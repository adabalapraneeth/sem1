#include <stdio.h>

int main() {
    int n, arr[100], i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0], second = -99999;

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest)
            second = arr[i];
    }

    printf("Second largest = %d", second);
}

