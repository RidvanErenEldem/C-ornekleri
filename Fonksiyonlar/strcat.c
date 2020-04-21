#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	char ilk[10]="bilgi", son[10]="merkezi", birlesim[20]="";
	strcat(birlesim, ilk); printf("\n%s", birlesim);
	strcat(birlesim, " "); printf("\n%s", birlesim);
	//strcat(birlesim, son);
	strncat(birlesim, son,3);
	printf("\n%s", birlesim);
}


//strcat(yeni_deger, degisken)
//strncat
