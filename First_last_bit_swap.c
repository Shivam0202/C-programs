#include <stdio.h>
#include <limits.h> 

unsigned int swapFirstAndLastBits(unsigned int x)
{
    unsigned int numBits = sizeof(unsigned int) * CHAR_BIT;
    unsigned int maskFirst = 1U << (numBits - 1);
    unsigned int maskLast = 1U;
    unsigned int firstBit = (x & maskFirst) >> (numBits - 1);
    unsigned int lastBit = (x & maskLast);
    x &= ~(maskFirst | maskLast);
    x |= (firstBit << 0);
    x |= (lastBit << (numBits - 1));
    return x;
}

int main()
{
    unsigned int x;
    printf("Enter an integer in decimal format: ");
    scanf("%u", &x);
    
    unsigned int result = swapFirstAndLastBits(x);
    printf("Original number: %u\n", x);
    printf("Result after swapping first and last bits: %u\n", result);
    
    return 0;
}
