#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	char r[2]="c";
	//dosya=fopen(dosyaismi, acilismod)
	dosya=fopen("yaz.txt","w");
	if(dosya==NULL)
	{
		printf("dosya ac�lamad�");
		exit(0);
	}
	else
	{
		printf("dosya acild�");
		fputs(r, dosya); //dosyaya karakter yazar
		fclose(dosya);
	}
	
	getch();
}
