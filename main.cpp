/************************************************************
************************************************************/
#include <stdio.h>
#include <stdlib.h>

// #define CHAR_BIT 8
#include <limits.h> 

/************************************************************
************************************************************/
void printb(unsigned int v)
{
	unsigned int mask = (int)1 << (sizeof(v) * CHAR_BIT - 1);
	do
		putchar(mask & v ? '1' : '0');
	while (mask >>= 1);
}

void printb_ln(unsigned int v)
{
	putchar('0'), putchar('b'), printb(v), putchar('\n');
}

int main()
{
	int x = 0b11111001;
	
	printf("0x%X\n", x);
	printb_ln(x);
	return 0;
}
