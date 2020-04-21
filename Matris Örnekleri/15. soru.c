#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	char metin[100];
	int  x, i;
	printf("Kelime girinz: ");
	gets(metin);
	x = strlen(metin);
	
	for(i=x;i>0;i--)
	{
		printf("\n%c", metin[i-1]);
	}
	getch();
}
