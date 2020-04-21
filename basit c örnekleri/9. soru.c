#include <stdio.h>

main()

{
	float a,b,c,alan,hacim;
	
	printf("Ilk kenari giriniz :");
	scanf("%f",&a);
	printf("Ikinci kenari giriniz :");
	scanf("%f",&b);
	printf("Ucuncu kenari giriniz :");
	scanf("%f",&c);
	
	hacim = a*b*c;
	alan = 2*(a*b+a*c+b*c);
	
	printf("====> HACIM = %f <====\n====> YUZEY ALAN = %f <====",hacim,alan);
	getch();
	
	
	
}
