#include <stdio.h>
#include <stdlib.h>

void DecToBin(int num, char *bin) {
    const int bits = 32;
    bin[bits] = '\0';  
    for (int idx = bits - 1; idx >= 0; idx--) {
        bin[bits - 1 - idx] = (num & (1 << idx)) ? '1' : '0';
    }
}

int main() {
    int x, n;
    char bin[33];

    printf("Enter an integer (x): ");
    scanf("%d", &x);

    printf("Enter bit position(index 0 based) to manipulate(n): ");
    scanf("%d", &n);

    int SetBitRes = x | (1 << n);
    DecToBin(x, bin);
    char binSetBit[33];
    DecToBin(SetBitRes, binSetBit);
    printf("Setting bit %d of %d (%s) : %d (%s)\n", n, x, bin, SetBitRes, binSetBit);

    int ClearBitRes = x & ~(1 << n);
    DecToBin(ClearBitRes, bin);
    char binClearBit[33];
    DecToBin(ClearBitRes, binClearBit);
    printf("Clear bit %d of %d (%s) : %d (%s)\n", n, x, bin, ClearBitRes, binClearBit);

    int ToggleBitRes = x ^ (1 << n);
    DecToBin(ToggleBitRes, bin);
    char binToggleBit[33];
    DecToBin(ToggleBitRes, binToggleBit);
    printf("Toggle bit %d of %d (%s) : %d (%s)\n", n, x, bin, ToggleBitRes, binToggleBit);

    int bit = x & (1 << n);
    DecToBin(x, bin);
    printf("Checking bit %d of %d (%s): %s\n", n, x, bin, bit ? "SET" : "NOT SET");

    return 0;
}