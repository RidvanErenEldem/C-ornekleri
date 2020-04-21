#include <stdio.h>
void yerdegistir(int *x, int *y)
{
	int gecici;
	gecici=*x;
	*x=*y;
	*y=gecici;
}
void main()
{
	int x=10, y=30;
	printf("x= %d, y= %d\n",x,y);
	yerdegistir(&x,&y);
	printf("x= %d, y= %d",x,y);
	
	getch();
}
