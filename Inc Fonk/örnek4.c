#include <stdio.h>
int hesapla (int a,int b)
{
	return a+b;
}
int hesapla (int a,int b,int c)
{
	return (a*b)+c;
}
void main()
{
	int x=3,y=5,z=10;
	printf("%d\n", hesapla(x,y));
	printf("%d\n", hesapla(x,y,z));
	getch();
}
