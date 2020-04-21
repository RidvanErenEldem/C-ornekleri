#include <stdio.h>

void main()
{
	int *p1, **p2, ***p3;
	int a=5;
	p1=a;
	printf("%d	%p\n",p1, &p1);
	p2=p1;
	printf("%d	%p\n",p2, &p2);
	p3=p2;
	printf("%d	%p\n",p3, &p3);
	getch();
}
