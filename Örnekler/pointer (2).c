#include <stdio.h>
void karakter_yazdir(char *p)
{
	for(;*p!=NULL;p++)
		printf("%c", *p);
}



void main()
{
	char dizi[]="bilgisayar muhendisligi";
	karakter_yazdir(dizi);
	getch();
}
