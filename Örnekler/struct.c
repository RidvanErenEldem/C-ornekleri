#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int secim; int i=0; int x; int j;
	struct hasta_bilgileri{
		char hasta_adi[20];
		int yas[20];
		int boy[20];
		int kilo[20];
	}hasta;
	
	struct hasta_bilgileri hastalar[20];
	
	do
	{
		printf("Hasta kayd� i�in [1]\n");
		
		printf("��k�� i�in [2]\n");
		scanf("%d", &secim);
	}while(secim > 3 || secim < 0);
	
	if(secim == 1)
	{
		do
		{
		printf("Hastan�n ad�n� giriniz: ");
		scanf("%s", &hasta.hasta_adi[i]);
		printf("Hastan�n ya��n� giriniz: ");
		scanf("%d", &hasta.yas[i]);
		printf("Hastan�n boyunu giriniz: ");
		scanf("%d", &hasta.boy[i]);
		printf("Hastan�n kilosunu giriniz: ");
		scanf("%d", &hasta.kilo[i]);
		printf("Hasta kayd�na devam etmek i�in 2 yi tu�layn�z ��kmak i�in 3: ");
		scanf("%d",&x);
		if(x!=2)
			break;
		i++;
		}while(x=2);
	}
	else if (secim == 2)
	{
		printf("��k�� Yapt�n�z.\nG�le G�le");
		getch();
	}
	
	printf("---------->HASTA B�LG�LER<----------");
	for(j=0;j<i;j++)
	{
		printf("%d. Hastan�n ad� ==> %s  ya�� ==> %d  boyu ==> %d  kilosu ==> %d\n",j+1,hasta.hasta_adi[j],hasta.yas[j],hasta.boy[j],hasta.kilo[j]);
	}
}
