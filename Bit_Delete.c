#include <stdio.h>

// Function to convert a decimal number to a binary string representation
void decimalToBinary(unsigned int num, char *binaryStr) {
    // Iterate over each bit position (from the most significant to the least significant)
    for (int i = 31; i >= 0; i--) {
        // If the bit at position i is set, place '1' in the binary string; otherwise, place '0'
        binaryStr[31 - i] = (num & (1U << i)) ? '1' : '0';
    }
    // Null-terminate the binary string
    binaryStr[32] = '\0';
}

// Function to delete n bits from a number starting from position p
unsigned int deleteBits(unsigned int num, int p, int n) {
    // Create a mask that keeps the bits we don't want to delete and clears the others
    unsigned int mask = (~((1U << n) - 1) << (p - n)) | ((1U << (p - n)) - 1);
    // Apply the mask to num using bitwise AND, clearing the desired bits
    return num & mask;
}

int main() {
    unsigned int num;              // Number entered by the user
    int position, bitsToDelete;    // Position and number of bits to delete
    char binaryBefore[33], binaryAfter[33]; // Binary string representations before and after deletion

    // Get the user input for the number
    printf("Enter the number: ");
    scanf("%u", &num);

    // Get the position to start deleting bits
    printf("Enter the position (from LSB) to start deleting bits: ");
    scanf("%d", &position);

    // Get the number of bits to delete
    printf("Enter the number of bits to delete: ");
    scanf("%d", &bitsToDelete);

    // Convert the original number to binary and
