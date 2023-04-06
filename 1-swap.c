#include "main.h"
/**
 * void swap_int - used to swap the integers of a and b
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
