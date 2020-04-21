#include <stdio.h>
int deneme(int *deger)
{
	return *deger+100;
}

void main()
{
	int sayi;
	int *psayi;
	printf("sayi giriniz "); scanf("%d",&sayi);
	psayi=&sayi;
	printf("yeni deger = %d", deneme(psayi));
}
