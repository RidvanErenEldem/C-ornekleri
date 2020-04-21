#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	char kr;
	int sayi=0;
	dosya=fopen("yaz.txt","r");
	if(dosya==NULL)
	{
		printf("dosya acýlamadý");
		exit(0);
	}
	else
	{
		printf("aradiginiz karakteri giriniz: ");
		scanf("%c", &kr);
		
		while(!feof(dosya))
		{
			if(kr==fgetc(dosya))
				sayi++;
		}
		
		printf("%d tane var", sayi);
		
		
		fclose(dosya);
		getch();	
	}
}
