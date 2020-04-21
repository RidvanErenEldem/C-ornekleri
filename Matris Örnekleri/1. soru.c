#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int x,y,i,j,k,m=0;
	
	printf("Matrisin boyutunu giriniz: ");
	scanf("%d", &x);
	int dizi[x][x];
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("Matrisin (%d,%d) elemaný giriniz: ", i+1,j+1);
			scanf("%d", &dizi[i][j]);
		}
	}
    
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			for(k=0;k<x;k++)
			{
				if(dizi[i][j]<dizi[k][j])
				{
				m=dizi[i][j];
				dizi[i][j]=dizi[k][j];
				dizi[k][j]=m;
				}
			}
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}

}
