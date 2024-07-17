#include <stdio.h>
#include <math.h>

// Function to calculate the number of binary digits
int numberOfBinaryDigits(int n) {
    if (n == 0) return 1; // Special case for 0
    return (int)log2(n) + 1;
}

int main() {
    int decimalNumber;

    // Prompt user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Calculate the number of binary digits
    int binaryDigits = numberOfBinaryDigits(decimalNumber);

    // Print the result
    printf("Number of binary digits: %d\n", binaryDigits);

    return 0;
}

