#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t a = 60000;
    uint16_t b = 50000;

    // Addition
    // Overflow, unsigned wrap around from 2 ^ 16 
    unsigned int sum = a + b;
    printf("Sum: %hu\n", sum);

    // // Subtraction
    // unsigned int difference = b - a;
    // printf("Difference: %hu\n", difference);

    // // Multiplication
    // unsigned int product = a * b;
    // printf("Product: %hu\n", product);

    // // Division
    // if (a != 0) {
    //     unsigned int quotient = b / a;
    //     printf("Quotient: %hu\n", quotient);
    // } else {
    //     printf("Division by zero is not allowed.\n");
    // }

    // // Modulus
    // if (a != 0) {
    //     unsigned int remainder = b % a;
    //     printf("Remainder: %hu\n", remainder);
    // } else {
    //     printf("Modulus by zero is not allowed.\n");
    // }

    return 0;
}
