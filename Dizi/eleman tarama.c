#include <stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[5]={99,2,15,12,-1},x,gecici;
	
	printf("Kontrol için bir sayi giriniz: ");
	scanf("%d",&gecici);
	
	for(x=0;x<5;x++)
	{
		if(dizi[x] == gecici)
		{
			printf("Dizinin %d. elemanýný buldun",x+1); break;
		}
	}
	
	getch();
	
	
	
}
