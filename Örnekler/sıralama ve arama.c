#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sirala(int *p1)
{
	int i, j, gecici;
	for(i=0;i<10;i++)
	{
		for (j=0; j<10; j++)
		{
		gecici=p1[i];
		p1[i]=p1[j];
		p1[j]=gecici;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",*p1);
		p1++;
	}
}
main()
{
	setlocale(LC_ALL, "Turkish");
	int *dizi = (int *)malloc( sizeof(int)*10), i, veri,ara;
	if(dizi== NULL)
	{
		printf("Bellekte yer yok");
	}
	again:
	printf("Seçim Yapýnýz\n[1] Sýrala\n[2] Ara\n");
	scanf("%d",&veri);
	if(veri!= 1 && veri!= 2)
	{
		goto again;
	}
	else
	{
		if (veri == 1)
		{
			for(i=0;i<10;i++)
			{
				printf("%d. elemaný giriniz ", i+1);
				scanf("%d", dizi+i);
			}
				sirala(dizi);
		}
		else
		{
			for(i=0;i<10;i++)
			{
				printf("%d. elemaný giriniz", i+1);
				
			}
		}
	}
}
