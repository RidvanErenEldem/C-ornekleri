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
	printf("-------> Se�im Yap�n�z <-------\n");
	printf("Sadece harf i�in [1]");
	printf("\nSadece rakam i�in [2]");
	printf("\nSe�iniz "); scanf("%d", &chose);
	
	switch(chose) {
	case 1: { printf("Harf giriniz "); 
			scanf(" %c",&a);
			if(isalpha(a)==0)
				{	printf("Sadece harf girecektin"); break; }
			else
				{
					printf("Do�ru giri� yapt�n girdi�in harf ----> %c", a); break;
				}
	}
	case 2: { printf("Say� giriniz ");
	scanf(" %d",&x);
	if(isdigit(x)==0)
		{	printf("Sadece rakam girecektin"); break; }
	else
		{	printf("Do�ru giri� yapt�n girdi�in say� ----> %d", x); break ; }
	} 
	default: printf("1 ile 2 aras�nda se�im yap�n�z\n"); goto baslangic; }
	
	getch();
}
