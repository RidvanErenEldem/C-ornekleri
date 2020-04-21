#include <stdio.h>

main()
{
	float h,r,hacim,alan; 
	printf("---Silindir---\nYuksekligi giriniz :");
	scanf("%f", &h);
	printf("Yari capi giriniz :");
	scanf("%f", &r);
	
	alan = 2*3.14*r*r+2*3.14*r*h;
	hacim = 3.14*r*r*h;
	
	printf("Hacim ==> %f\nAlan == %f>",hacim,alan);
	
	getch();	
}
