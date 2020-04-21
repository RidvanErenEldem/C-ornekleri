#include <stdio.h>
#include <math.h>
#include <locale.h>

void delta_0_dan_buyukse (float delta , float a ,float b)
{
	float x1, x2;
	x1=(-b+sqrt(delta))/a*2;
	x2=(-b-sqrt(delta))/a*2;
	printf("Denklemin k�kleri x1 = %f, x2 = %f\n", x1,x2);
}
void delta_esittir_0 (float a, float b)
{
	float x1;
	x1=-b/2*a;
	printf("Denklemin k�k� = %f\n",x1);
}
void delta_kucuktur_0 ()
{
	printf("Denklemin reel k�k� yoktur\n");
}
int main()
{
	bas:
	setlocale(LC_ALL,"Turkish");
	float delta;
	int islem;
	struct denklem{
		float a;
		float b;
		float c;
	}degisken;
	
	printf("Ho�geldiniz\nBu program ile ikinci dereceden (ax^2+bx+c) denklemleri ��ze bilirisiniz\nL�tfen x^2 nin katsay�s�n� giriniz ");
	scanf("%f",&degisken.a);
	printf("x in katsay�s�n� giriniz ");
	scanf("%f",&degisken.b);
	printf("c yi giriniz ");
	scanf("%f",&degisken.c);
	
	delta = degisken.b*degisken.b-4*degisken.a*degisken.c;
	
	if(delta < 0)
	{
		delta_kucuktur_0();
	}
	else if (delta > 0)
	{
		delta_0_dan_buyukse(delta,degisken.a,degisken.b);
	}
	else
	{
		delta_esittir_0(degisken.a,degisken.b);
	}
	printf("Program� kapatmak i�in 1 e bas yeniden i�lem yapmak i�in 2 ye bas ");
	scanf("%d",&islem);
	if(islem == 2)
	{
		goto bas;		
	}
}
