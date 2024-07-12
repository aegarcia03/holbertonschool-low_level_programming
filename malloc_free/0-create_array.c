#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * 		it with a specific char.
 * @size: size of the array to be created.
 * @c: char to initialize the array with 
 *
 * Return: a pointer to the array or
 * NULL if size = 0 or if it fails.
 */
char *create_array(unsigned int size, char c)
{
