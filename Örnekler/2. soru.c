#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int secim;
	float x,y,sonuc;
	printf("1. Sayýyý giriniz ===> ");
	scanf("%f", &x);
	printf("2. Sayýyý giriniz ===> ");
	scanf("%f", &y);
	baslangic:
	printf("[1] Toplama");
	printf("\n[2] Çýrakma");
	printf("\n[3] Çarpma");
	printf("\n[4] Bölme");
	printf("\n[5] Üs alma");
	printf("\n[6] Çýkýþ");
	printf("\nSeçiniz ");
	scanf("%d", &secim);
	switch(secim)
	{

		case 1: sonuc = x + y; printf("Toplam = %f", sonuc); break;
		case 2: sonuc = x - y; printf("Fark = %f", sonuc); break;
		case 3: sonuc = x * y; printf("Çarpým = %f", sonuc); break;
		case 4: sonuc = x / y; if(y==0) { printf("Tanýmsýzdýr"); break; }else {printf("Bölüm = %f", sonuc); break; }
		case 5: sonuc = pow(x,y); printf("Üs = %f", sonuc); break;
		case 6: printf("Çýkýþ Yaptýnýz."); break;
		default: printf("1 ile 6 arasýnda seçim yap"); goto baslangic;
	}
	getch();
}
