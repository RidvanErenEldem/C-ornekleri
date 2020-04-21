#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	char kr;
	
	dosya=fopen("yaz.txt","r");
	if(dosya==NULL)
	{
		printf("dosya acýlamadý");
		exit(0);
	}
	else
	{
		kr=fgetc(dosya);
		printf("Okunan deger = %c", kr);
		fclose(dosya);
	}
	
	getch();
}
