#include <stdio.h>
#include <math.h>

main()
{
	float x, y, z, delta, kok, kok2;
	
	printf("Denklemin Katsayýlarýný Sýra ile giriniz");
	scanf("%f %f %f",&x,&y,&z);
	
	delta=y*y-4*x*z;
	
	if (delta<0)
	    printf("reel kökü yoktur");
	else if (delta>0)
	{
		kok=(-y+sqrt(delta))/2*x;
		kok2=(-y-sqrt(delta))/2*x;
		printf(" kok = %f \n kok2 = %f", kok, kok2);
	}
	else
	{
		kok=-y/2*x;
		printf("kok = %f", kok);
	}
	getch();
}
