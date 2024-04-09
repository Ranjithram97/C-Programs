#include <stdio.h>
int countEven(int n, int *arr) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
int countOdd(int n, int *arr) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int evenCount = countEven(n, arr);
    int oddCount = countOdd(n, arr);
    printf("Odd:%d\n", oddCount);
    printf("Even: %d\n", evenCount);
}
