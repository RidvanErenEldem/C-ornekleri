#include <stdio.h>
#include <stdlib.h>

main()
{
	char sayi1[]="1.25";
	char deger[]="12 numaralý ogrenci";
	char sayi2[]="155";
	
	printf("\n%d",atof(sayi1));// virhüllü sayýlar
	printf("\n%f",atof(sayi1));
	printf("\n%f",atof(deger));
	printf("\n%d",atoi(sayi2));// tam sayýlar
	
	getch();
}
