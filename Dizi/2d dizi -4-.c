#include <stdio.h>

main()
{
	int i,j,a[2][2]={1,3,5,7},c[4],sayac=0;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			if(a[i][j]%2!=0)
			{
				c[sayac]=a[i][j];
				sayac++;
				//c[i]=a[i][j]; other
				//printf("%d ",c[i]); way
			}
		}
		printf("\n");	
	}
	for(i=0;i<sayac;i++)
	printf("\n %d ",c[i]);
	getch();
}
