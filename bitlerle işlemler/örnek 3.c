#include <stdio.h>

int main()
{
	unsigned int x = 0x1BC5; /* x = 0001 1011 1100 0101 */
	unsigned int y = 0X3A0D; /* y = 0011 1010 0000 1101 */
	unsigned int z;
	
	printf("x=%X\ny=%X\n",x,y);
	z = x & y;					/* z = 0001 1010 0000 0101 */
	printf("\nx VE y = %X",z); /* z = 0x1A05 */
	z = x | y;				  /* z = 0011 1011 1100 1101 */
	printf("\nx VEYA y = %X",z); /* z = 0x3BCD */
	z = x ^ y;				/* 0010 0001 1100 1000 */
	printf("\nx OZEL VEYA (EXOR) y = %X",z); /* z= 0x21C8 */
	
	getch();
}
