#include <stdio.h>
float karesi(float a)
{
	a = a*a;
	return a;
}
void main()
{
	float a=3.5;
	printf("Karesi %0.2f",karesi(a));
}
