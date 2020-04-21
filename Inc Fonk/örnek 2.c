#include <stdio.h>
#include <math.h>
int mutlak_degerini_al(int a)
{
	if (a<0) a*=-1;
	return a;
}
void main()
{
	int sayi;
	printf("sayiyi giriniz: "); scanf("%d", &sayi);
	printf("Mutlak deger= %d\n",mutlak_degerini_al(sayi));
	printf("(abs)Mutlak deger= %d",abs(sayi));
	getch();
}
