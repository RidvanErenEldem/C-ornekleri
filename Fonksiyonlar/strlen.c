
#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	
	printf("Merhaba\n");
	printf("%d\n",strlen("Merhaba"));
	
	char ad[10]="bilgisayar", yeni[10]="", yeni1[10]="";
	//printf("%s\n%s", ad, yeni);
	strcpy(yeni, ad);
	//strncpy(yeni1, ad,5);
	printf("%s\n%s", ad, yeni1);
	//strlen(string)
	//strcpy(yeni, eski)
	getch();	
}
