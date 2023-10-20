#include <stdio.h>

void tortoise(void) __attribute__((constructor));

/**
 * tortoise - a function that prints...before the main function is
 * executed
 * Return: void
 */
void tortoise(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
