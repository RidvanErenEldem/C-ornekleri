#include <stdio.h>

main()
{
	int i,dizi[5]={2,5,8,9,5},sayi,toplam=0;
	printf("Bir sayi gir: ");
	scanf("%d",&sayi);
	
	
	for(i=0;i<=4;i++)
	{
		if(sayi == dizi[i])
		{
			toplam = toplam + 1;
		}
	}
	printf("Girdiginiz sayidan %d tane vardir",toplam);
	getch();
}
