#include <stdio.h>

main()
{
	int sayi;
	int sayi2;
	int sonuc;
	int carp;
	int bol;
	int fark;
	printf ("Ilk sayiyi giriniz =");
	scanf ("%d",&sayi);
	printf ("\nIkinci sayiyi giriniz =");
	scanf ("%d",&sayi2);
	
	sonuc = sayi + sayi2;
	carp = sayi * sayi2;
	bol = sayi / sayi2;
	fark = sayi - sayi2;
	
	printf ("%d+%d = %d", sayi, sayi2, sonuc);
	printf ("\n%d*%d = %d", sayi, sayi2, carp);
	printf ("\n%d/%d = %d", sayi, sayi2, bol);
	printf ("\n%d-%d = %d", sayi, sayi2, fark);
	
	getch();	
}
