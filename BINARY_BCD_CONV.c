#include <stdio.h>

void binaryToBCD(unsigned int binary) {
    unsigned int mask = 1 << (sizeof(binary) * 8 - 1);
    int bcd[4] = {0};

    for (int i = 0; i < sizeof(binary) * 8; i++) {
        for (int j = 0; j < 4; j++) {
            if (bcd[j] >= 5) {
                bcd[j] += 3;
            }
        }

        for (int j = 3; j > 0; j--) {
            bcd[j] = (bcd[j] << 1) | (bcd[j-1] >> 3);
        }
        bcd[0] <<= 1;

        if (binary & mask) {
            bcd[0]++;
        }
        mask >>= 1;
    }

    printf("BCD representation: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d", bcd[i]);
    }
    printf("\n");
}

int main() {
    unsigned int binary;

    printf("Enter a binary number (as an integer): ");
    scanf("%u", &binary);

    binaryToBCD(binary);

    return 0;
}
