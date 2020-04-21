#include <stdio.h>

int main()
{
	unsigned int x= 0x1AC3;  /* x=0001 1010 1100 0011 */
	unsigned int y;
	
	printf("x = %X",x);
	
	y=~x; /* x in deðili */
	/* y = 1110 0101 0011 1100 */
	printf("\nx in degili => y=%X", y);
	
	x=52; /* 0101 0010 => 0001 0100 */
	y=2;
	printf("\n\nyeni deger = %d", x>>y);
	
}
