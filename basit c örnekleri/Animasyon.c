#include <stdio.h>
#include <windows.h>

main()
{
	system("color C");
	int i,j,sayi;
	printf("sayi giriniz:");scanf("%d",&sayi);
	for(i=sayi;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	getch();
}
