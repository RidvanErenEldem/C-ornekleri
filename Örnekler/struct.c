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
		printf("Hasta kaydý için [1]\n");
		
		printf("Çýkýþ için [2]\n");
		scanf("%d", &secim);
	}while(secim > 3 || secim < 0);
	
	if(secim == 1)
	{
		do
		{
		printf("Hastanýn adýný giriniz: ");
		scanf("%s", &hasta.hasta_adi[i]);
		printf("Hastanýn yaþýný giriniz: ");
		scanf("%d", &hasta.yas[i]);
		printf("Hastanýn boyunu giriniz: ");
		scanf("%d", &hasta.boy[i]);
		printf("Hastanýn kilosunu giriniz: ");
		scanf("%d", &hasta.kilo[i]);
		printf("Hasta kaydýna devam etmek için 2 yi tuþlaynýz çýkmak için 3: ");
		scanf("%d",&x);
		if(x!=2)
			break;
		i++;
		}while(x=2);
	}
	else if (secim == 2)
	{
		printf("Çýkýþ Yaptýnýz.\nGüle Güle");
		getch();
	}
	
	printf("---------->HASTA BÝLGÝLER<----------");
	for(j=0;j<i;j++)
	{
		printf("%d. Hastanýn adý ==> %s  yaþý ==> %d  boyu ==> %d  kilosu ==> %d\n",j+1,hasta.hasta_adi[j],hasta.yas[j],hasta.boy[j],hasta.kilo[j]);
	}
}
