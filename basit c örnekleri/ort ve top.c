//D��ardan gireln 10 tane say�n�n toplamn� ve ortalamsa�n� bulduran c program�

#include <stdio.h>

main()
{
	int i,x,top=0;
	float ort;
	
	for (i=1; i<=10; i++)
	{
		printf("Sayiyi giriniz = ");
		scanf("%d", &x);
		
		top = x + top;
	}

	printf("Toplam = %d\n", top);
	ort = top / 10;
	printf("Ortalama = %f", ort);
	
	getch();

}
