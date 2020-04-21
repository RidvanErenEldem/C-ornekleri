#include <stdio.h>
void main()
{
	int i,j,sayi;
	printf("Sayi giriniz ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
	getch();
}
