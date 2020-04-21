#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int i,j,a[100][100],b[100][100],c[100][100],x;
	
	printf("Matrisin boyutunu giriniz: ");
	scanf("%d", &x);

	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("Matrisin (%d,%d). elemaný giriniz ", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(a[i][j] < 0)
			{
				c[i][j] = a[i][j];
			}
			else
			{
				b[i][j] = a[i][j];
			}
		}
	}
	printf("Poztif Matris\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("Negatif Matris\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	getch();
	

}
