#include <stdio.h>
#include <math.h>

main()
{
	float a,s,h,r,hacim,alan; 
	printf("---Koni---\nYuksekligi giriniz :");
	scanf("%f", &h);
	printf("Yari capi giriniz :");
	scanf("%f", &r);
	
	hacim = 3.14*r*r*h/3;
	a = r*r+h*h;
	s=sqrt(a);
	alan = 3.14*r*s+3.14*r*r;
	
	printf("Hacim ==> %f\nYuzey Alan == %f>",hacim,alan);
	
	getch();
}
