#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int i,j,dizi1[100][100],dizi2[100][100],carp[100][100],x,a,y,z,k = 0,m;
	bas:
	printf("1. matrisin sat�r say�s�n� giriniz: ");
	scanf("%d", &x);
	printf("1. matrisin s�tun say�s�n� giriniz: ");
	scanf("%d", &y);
	printf("2. matrisin sat�r say�s�n� giriniz: ");
	scanf("%d", &a);
	printf("2. matrisin s�t�n say�s�n� giriniz: ");
	scanf("%d", &z);
	
	if(y == a || x == z)
	{
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("1. Matrisin (%d,%d). eleman� giriniz: ", i+1,j+1);
			scanf("%d", &dizi1[i][j]);
		}
	}
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("2. Matrisin (%d,%d). eleman� giriniz: ", i+1 , j+1);
			scanf("%d", &dizi2[i][j]);
		}
	}
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			for(m=0; m<z; m++)
			{
				k += dizi1[i][m] * dizi2[m][j];
			}
			carp[i][j] = k;
            k=0;
			printf("%d ",carp[i][j]);
			
		}
	}
	printf("\n");
	}
	else
	{
		printf("Hatal� girdi: \n");
		goto bas;
	}
}
