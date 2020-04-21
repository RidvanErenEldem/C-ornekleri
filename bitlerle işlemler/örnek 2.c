#include <stdio.h>

int main()
{
	int i;
	for(i=1;i<=5;i++) /* 0000 0000 0000 0001 */
		printf("\n %d", i<<2);
		
	char kr='F'; /* 0100 0110 */
	printf("\nKarakter = %c",kr);
	printf("\nYeni karakter = %c",kr); /* 1000 1100 */
	
	getch();
}
