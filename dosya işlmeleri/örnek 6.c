#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	char metin[80]="gtx_1050_ti better";
	dosya=fopen("yaz.txt","a+"); //a+ hem okuma hem yazma
	if(dosya==NULL)
	{
		printf("dosya acýlamadý");
		exit(0);
	}
	else
	{
		fputs("\n",dosya);
		fputs(metin,dosya);
		printf("Eklenen metin = %s",metin);
		fclose(dosya);
	}
	getch();
}
