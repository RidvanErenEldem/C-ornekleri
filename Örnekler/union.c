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
	
	printf("ax�+bx+c �eklinde ikinci derceden denklemin k�klerini giriniz\n a = ? ");
	scanf("%d", &degisken.a);
	printf("b = ?");
	scanf("%d", &degisken.b);
	printf("c = ?");
	scanf("%d", &degisken.c);
	
	delta=degisken.b*degisken.b-4*degisken.a*degisken.c;
	if(delta<0)
	{
		printf("Reel k�k yoktur");
	}
	else if(delta == 0)
	{
		x1=-degisken.b/2*degisken.a;
		printf("Tek k�k vard�r ve o k�k ===> %d",x1);
	}
	else
	{
		x1=(-degisken.b+sqrt(delta))/2*degisken.a;
		x2=(-degisken.b-sqrt(delta))/2*degisken.a;
		printf("�ift k�k vard� x1 = %d x2 = %d",x1,x2);
	}
}
