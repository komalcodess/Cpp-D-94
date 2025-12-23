#include <stdio.h>

int Sum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + Sum(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Sum = %d", Sum(arr, 5));
    return 0;
}
