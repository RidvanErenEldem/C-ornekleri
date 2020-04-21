#include <stdio.h>
#include <conio.h>
main()
{
	int sayi1, sayi2,i;
	printf("\n1. sayiyi giriniz");
	scanf("%d",&sayi1);
	printf("\n2. sayiyi giriniz");
	scanf("%d",&sayi2);
	for(i=1;i<=sayi1*sayi2;i++)
	{
		if((i%sayi1==0) && (i%sayi2==0))
		{
			printf("OKEK(%d,%d) = %d", sayi1,sayi2,i);
			break;
		}
	}
	for(i=sayi1+sayi2;i>0;i--)
	{
		if((sayi1%i==0) && (sayi2%i==0))
		{
			printf("\nOBEB(%d,%d) = %d", sayi1, sayi2, i);
			break;
		}
	}
	getch();
}
