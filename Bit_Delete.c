#include <stdio.h>

void decimalToBinary(unsigned int num, char *binaryStr) {
    for (int i = 31; i >= 0; i--) {
        binaryStr[31 - i] = (num & (1U << i)) ? '1' : '0';
    }
    binaryStr[32] = '\0';
}

unsigned int deleteBits(unsigned int num, int p, int n) {
    unsigned int mask = (~((1U << n) - 1) << (p - n)) | ((1U << (p - n)) - 1);
    return num & mask;
}

int main() {
    unsigned int num;
    int position, bitsToDelete;
    char binaryBefore[33], binaryAfter[33];

    printf("Enter the number: ");
    scanf("%u", &num);

    printf("Enter the position (from LSB) to start deleting bits: ");
    scanf("%d", &position);

    printf("Enter the number of bits to delete: ");
    scanf("%d", &bitsToDelete);

    decimalToBinary(num, binaryBefore);
    unsigned int result = deleteBits(num, position, bitsToDelete);
    decimalToBinary(result, binaryAfter);

    printf("Binary before deleting bits:  %s\n", binaryBefore);
    printf("Binary after deleting bits:   %s\n", binaryAfter);
    printf("The resulting number is:      %u\n", result);

    return 0;
}
