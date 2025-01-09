#include <stdio.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a1, b1, a2, b2;
    int numerator, denominator;

    // Input the two fractions in the format a/b c/d
    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);

    // Find the least common multiple (LCM) of the denominators
    int common_denominator = lcm(b1, b2);

    // Adjust the numerators to have the common denominator
    a1 = a1 * (common_denominator / b1);
    a2 = a2 * (common_denominator / b2);

    // Add the numerators
    numerator = a1 + a2;
    denominator = common_denominator;

    // Simplify the resulting fraction
    int common_divisor = gcd(numerator, denominator);
    numerator /= common_divisor;
    denominator /= common_divisor;

    // Output the result in the required format
    if (denominator == 1)
        printf("%d\n", numerator); // If denominator is 1, only print the numerator
    else
        printf("%d/%d\n", numerator, denominator); // Otherwise, print a/b format

    return 0;
}