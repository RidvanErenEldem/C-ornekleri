#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int secim;
	float x,y,sonuc;
	printf("1. Say�y� giriniz ===> ");
	scanf("%f", &x);
	printf("2. Say�y� giriniz ===> ");
	scanf("%f", &y);
	baslangic:
	printf("[1] Toplama");
	printf("\n[2] ��rakma");
	printf("\n[3] �arpma");
	printf("\n[4] B�lme");
	printf("\n[5] �s alma");
	printf("\n[6] ��k��");
	printf("\nSe�iniz ");
	scanf("%d", &secim);
	switch(secim)
	{

		case 1: sonuc = x + y; printf("Toplam = %f", sonuc); break;
		case 2: sonuc = x - y; printf("Fark = %f", sonuc); break;
		case 3: sonuc = x * y; printf("�arp�m = %f", sonuc); break;
		case 4: sonuc = x / y; if(y==0) { printf("Tan�ms�zd�r"); break; }else {printf("B�l�m = %f", sonuc); break; }
		case 5: sonuc = pow(x,y); printf("�s = %f", sonuc); break;
		case 6: printf("��k�� Yapt�n�z."); break;
		default: printf("1 ile 6 aras�nda se�im yap"); goto baslangic;
	}
	getch();
}
