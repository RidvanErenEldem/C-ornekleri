#include <stdio.h>
main()
{
	int i,j,dizi[3][3]={0,1,2,3,4,5,6,7,8};
	
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	getch();
}

