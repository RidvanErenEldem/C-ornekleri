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
	 	if(p1[j]<p1[i])
	 	{
		
	 		gecici=p1[i];
	 		p1[i]=p1[j];
	 		p1[j]=gecici;
	 	}
		}
	 }
	 for(i=0;i<10;i++)
	 {
	 	printf("%d\n",*p1);
	 	p1++;
	 }
}
int arama(int *p2,int aranacak)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d", *p2+i);
		if(p2+i==aranacak)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


main()
{
	setlocale(LC_ALL, "Turkish");
	int *dizi = (int *)malloc( sizeof(int)*10);
	int i ,veri, aranacak;
	if(dizi==NULL)
	{
		printf("Ramde yer yok");
	}
	again:
	printf("Se�im Yap�n�z\n[1] S�rala\n[2] Ara\n");
	scanf("%d",&veri);
	if(veri!=1 && veri!= 2)
	{
		goto again;
	}
	else
	{
		if (veri == 1)
		{
			for(i=0;i<10;i++)
			{
				printf("%d. eleman� giriniz ", i+1);
				scanf("%d", dizi+i);
			}
				sirala(dizi);
		}
		else
		{
			for(i=0;i<10;i++)
			{
				printf("%d. eleman� giriniz ", i+1);
				scanf("%d", dizi+i);
			}
			printf("Araman istedi�iniz say�y� giriniz ");
			scanf("%d", &aranacak);
			if(arama(dizi,aranacak)!=1)
			{
				printf("Arad���n dizide mevcuttur");
			}
			else
			{
				printf("Arad���n dizide mevcut de�ildir");
			}
			
		}
		
	}
}
