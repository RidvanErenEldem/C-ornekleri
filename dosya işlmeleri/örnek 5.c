#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	char metin[80];
	dosya=fopen("yaz.txt","r");
	if(dosya==NULL)
	{
		printf("dosya acýlamadý");
		exit(0);
	}
	else
	{
		//fgets(degisken,kackarakter,dosya);
		fgets(metin,80,dosya);
		printf("Okunan metin = %s", metin);
		fclose(dosya);
		getch();
	}
}
