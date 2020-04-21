#include <stdio.h>
void main()
{
	int i,j,sayi;
	printf("Sayi giriniz ");
	scanf("%d",&sayi);
	for(i=sayi;i>=1;i--)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("  ");
		}
		printf("* \n");
		
	}

	getch();
}
