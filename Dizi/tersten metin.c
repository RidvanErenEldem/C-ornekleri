#include <stdio.h>
#include <string.h>
main()
{
	char metin[50];
	int i, boyut;
	printf("metni giriniz: ");
	gets(metin);
	boyut=strlen(metin);
	for(i=boyut-1
	;i>=0;i--)
	{
		printf("%c",metin[i]);
	}
	getch();
}
