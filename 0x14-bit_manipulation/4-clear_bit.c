#include "main.h"

/**
 * clear_bit - sets a particular bit's value to 0.
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index) {
    /*Check if the index is valid*/
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }
    
    /*Clear the bit*/
    *n &= ~(1UL << index);
    
    return 1;
}
