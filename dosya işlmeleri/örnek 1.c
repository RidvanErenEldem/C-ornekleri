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
		printf("dosya acýlamadý");
		exit(0);
	}
	else
	{
		printf("dosya acildý");
		fputs(r, dosya); //dosyaya karakter yazar
		fclose(dosya);
	}
	
	getch();
}
