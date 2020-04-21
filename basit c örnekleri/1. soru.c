#include <stdio.h>
#include <math.h>
main()

{
	float x,y,z;
	
	printf("Bir sayi Giriniz :");
	scanf("%f",&x);
	
	y=x;
	z=x;
	
	x=x*x;
	y=y*y*y;
	z=sqrt(z);
	
	
	
	printf("\nKaresi ==> %f \nKupu ==> %f\nKarekoku ==> %f", x,y,z);
	getch();
}
