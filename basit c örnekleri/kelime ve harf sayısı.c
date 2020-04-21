#include <stdio.h>

int main()
{
	int harf, kelime;
	char karakter;
	printf("Nokta ile biten bir cumle yaziniz\n");
	printf("================0================\n");
	scanf("%c",&karakter);
	kelime=0;
	harf=0;
	while(karakter!='.')
	{
		harf++;
		if(karakter==' ')
		kelime++;
		scanf("%c", &karakter);
	}
	printf("Karakter sayisi: %d\n", harf);
	printf("Kelime sayisi: %d\n", kelime+1);
	getchar(); getchar();
	
	getch();
	
}
