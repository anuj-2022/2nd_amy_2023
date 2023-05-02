#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned short data = 0x1234;

	unsigned short swap = ((data >> 8) & 0x00FF) | ((data << 8) & 0xFF00);

	printf("original value is 0x%04X\n",data);
	printf("Swapped value is 0x%04X\n",swap);

	return 0;
}
