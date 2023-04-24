#include <stdio.h>

/**
 * main - entry point
 *Return: 0
 * C program to demonstrate use of pointers
 */


int main(void)
{
	int num = 1;
	int *ptr = &num;   // ptr points to num

	printf("Value of num   = %d \n", num);
	printf("Address of num = %p \n\n", &num);


	printf("Value of ptr         = %x \n", ptr);
	printf("Address of ptr       = %p \n", &ptr);
	printf("Value pointed by ptr = %p \n\n", *ptr);


	/* Change the value of num directly */
	num = 10;
	printf("After changing value of num directly. \n");
	printf("Value of num         = %d \n", num);
	printf("Value pointed by ptr = %p \n\n", *ptr);


	/* Assigns 100 at the address pointed by ptr */
	*ptr = 100;
	printf("After changing value pointed by ptr. \n");
	printf("Value of num         = %d \n", num);
	printf("Value pointed by ptr = %d \n", *ptr);

	return (0);
}
