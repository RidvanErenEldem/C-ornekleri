#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int delta, x1, x2;
	setlocale(LC_ALL,"Turkish");
	union katsayi {
		int a;
		int b;
		int c; 
	}degisken;
	
	printf("ax²+bx+c þeklinde ikinci derceden denklemin köklerini giriniz\n a = ? ");
	scanf("%d", &degisken.a);
	printf("b = ?");
	scanf("%d", &degisken.b);
	printf("c = ?");
	scanf("%d", &degisken.c);
	
	delta=degisken.b*degisken.b-4*degisken.a*degisken.c;
	if(delta<0)
	{
		printf("Reel kök yoktur");
	}
	else if(delta == 0)
	{
		x1=-degisken.b/2*degisken.a;
		printf("Tek kök vardýr ve o kök ===> %d",x1);
	}
	else
	{
		x1=(-degisken.b+sqrt(delta))/2*degisken.a;
		x2=(-degisken.b-sqrt(delta))/2*degisken.a;
		printf("Çift kök vardý x1 = %d x2 = %d",x1,x2);
	}
}
