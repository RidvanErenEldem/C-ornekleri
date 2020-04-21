#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int chose;
	char a,x;
	baslangic:
	printf("-------> Seçim Yapýnýz <-------\n");
	printf("Sadece harf için [1]");
	printf("\nSadece rakam için [2]");
	printf("\nSeçiniz "); scanf("%d", &chose);
	
	switch(chose) {
	case 1: { printf("Harf giriniz "); 
			scanf(" %c",&a);
			if(isalpha(a)==0)
				{	printf("Sadece harf girecektin"); break; }
			else
				{
					printf("Doðru giriþ yaptýn girdiðin harf ----> %c", a); break;
				}
	}
	case 2: { printf("Sayý giriniz ");
	scanf(" %d",&x);
	if(isdigit(x)==0)
		{	printf("Sadece rakam girecektin"); break; }
	else
		{	printf("Doðru giriþ yaptýn girdiðin sayý ----> %d", x); break ; }
	} 
	default: printf("1 ile 2 arasýnda seçim yapýnýz\n"); goto baslangic; }
	
	getch();
}
