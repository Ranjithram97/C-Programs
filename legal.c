#include <stdio.h>

int main() {
    long long num;
    int found[5] = {0};  // Array to track if each digit is found

    // Input the number
    printf("Enter a number: ");
    scanf("%lld", &num);

    // Process each digit
    while (num != 0) {
        int digit = num % 10;

        // Check if the digit is 0, 1, 8, 6, or 9
        if (digit == 0 || digit == 1 || digit == 8 || digit == 6 || digit == 9) {
            found[digit % 5] = 1;
        }

        // Move to the next digit
        num /= 10;
    }

    // Check if all required digits are found
    int allDigitsFound = 1;
    for (int i = 0; i < 5; ++i) {
        if (!found[i]) {
            allDigitsFound = 0;
            break;
        }
    }

    // Output the result
    if (allDigitsFound) {
        printf("The number contains all of 0, 1, 8, 6, and 9.\n");
    } else {
        printf("The number does not contain all of 0, 1, 8, 6, and 9.\n");
    }

    return 0;
}

