#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	dosya=fopen("deneme.txt","w");
	if(dosya == NULL)
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		fputs("bu bir virus",dosya);
		fseek(dosya,3,SEEK_SET);
		fputs("elmaaa",dosya);
		fclose(dosya);
	}
	getch();
}
