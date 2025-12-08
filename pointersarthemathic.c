#include <stdio.h>

int main() {
    int arr[3] = {4, 8, 12};
    int *p = arr;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));

    return 0;
}

