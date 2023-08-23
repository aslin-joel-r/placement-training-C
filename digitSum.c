#include <stdio.h>

int main() {
    int num = 29999, sum = 0, temp;

    while (num > 9) { // Keep looping until the sum becomes a single-digit number
        sum = 0; // Reset sum for each iteration
        temp = num;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        num = sum; // Assign the sum to num for the next iteration
    }

    printf("Final single-digit sum is: %d", num);

    return 0;
}
