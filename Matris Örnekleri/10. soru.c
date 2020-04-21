#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int x,i,j,dizi[100][100],temp,say=0;
	
	printf("Matrisin boyutunu giriniz: ");
	scanf("%d", &x);
	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("Matrisin (%d,%d). elemaný giriniz: ", i+1,j+1);
			scanf("%d", &dizi[i][j]);
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			temp = dizi[i][j];
			if(temp == dizi[i][j])
			{
				say++;
			}
		}
	}
	printf("%d elmanýndan %d tane vardýr.", dizi[i][j], say);
}
