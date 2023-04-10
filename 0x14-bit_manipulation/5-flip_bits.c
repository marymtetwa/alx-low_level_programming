#include "main.h"

/**
 * flip_bits - the amount of bits to be changed
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int xor_value = n ^ m;
    unsigned int count = 0;
    while (xor_value != 0) {
        count += (xor_value & 1);
        xor_value >>= 1;
    }
    return count;
}
