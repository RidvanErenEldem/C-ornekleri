#include <stdio.h>

main()
{
	int i,j,dizi[2][2];
	int dizif[2][2],c[2][2];
	
	printf("a dizisini giriniz: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("( %d,%d ) =",i+1,j+1);
			scanf("%d", &dizi[i][j]);
		}
	}
	printf("b dizisini giriniz: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("( %d,%d ) =",i+1,j+1);
			scanf("%d", &dizif[i][j]);
		}
	}
	printf("C dizisi : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]= dizi[i][j]+ dizif[i][j];
			printf(" (%d,%d) = %d ",i , j ,c[i][j]);
		}
		printf("\n");
	}

	
}	

