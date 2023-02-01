#include <REGX52.H>
#include <Head/Nixie.h>

void delay(unsigned int xms)		
{
	unsigned char i, j;
	while (xms)
	{	
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	while (1)
	{
		P2_4 = 1;
		P2_3 = 0;
		P2_2 = 0;
		P0 = eight;    //01011011
		delay(10);
		P2_4 = 1;
		P2_3 = 0;
		P2_2 = 1;
		P0 = one;
		delay(10);
	}
}