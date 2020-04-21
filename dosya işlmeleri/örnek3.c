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
		do
		{
		kr=fgetc(dosya);
		printf("%c", kr);
		}while(kr!=EOF); //dosya bitesye kadar çalýþacak
		
		fclose(dosya);
	}
	
	getch();
}
