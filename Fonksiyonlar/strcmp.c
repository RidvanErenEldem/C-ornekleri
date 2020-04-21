#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	
	char ilk[10]="maymun", son[10] = "maytap";
	int sonuc;
	sonuc=strcmp(ilk,son);
	printf("%d\n", sonuc);
	printf("%d\n", strcmp(ilk,son));
	printf("%d\n", strncmp(ilk,son,3));
	
	//strcmp(birinci, ikinci)	
	
}
