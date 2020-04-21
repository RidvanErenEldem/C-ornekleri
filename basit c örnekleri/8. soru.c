#include <stdio.h>

main()
{
	float tbnalan,h,hacim;
	
	printf("---Piramit---\nTaban alani giriniz :");
	scanf("%f",&tbnalan);
	printf("Yuksekligi giriniz :");
	scanf("%f",&h);
	
	hacim = tbnalan*h/3;
	
	printf("====> HACIM = %f <====",hacim);
	
	getch();
}
