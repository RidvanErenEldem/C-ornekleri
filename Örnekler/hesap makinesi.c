#include <stdio.h>

int main()
{
	float sayi1;
	float sayi2;
	float sonuc;
	int sec;
	
	printf("birinici sayi giriniz: ");
	scanf("%f",&sayi1);
	printf("ikinci sayi giriniz: ");
	scanf("%f",&sayi2);
	
	printf("1-) Toplam\n2-) Cikarma\n3-) Carpma\n4-) Bolme");
	scanf("%d",&sec);
	
	switch (sec)
	{
		case 1: {
			sonuc = sayi1 +sayi2;
			printf("Toplama = %d",sonuc);
			break;
		}
		case 2: {
			sonuc = sayi1 - sayi2;
			printf("Cikarma = %d",sonuc);
			break;
		}
		case 3: {
			sonuc = sayi1 * sayi2;
			printf("Carpim = %d",sonuc);
			break;
		}
		case 4: {
			if (sayi2 == 0)
				printf("Bolme = tanimsiz");
			else
				{
					sonuc = sayi1 / sayi2;
					printf("Bolme = %d", sonuc);
				}
			break;
		}
		default : {
			printf("Yanlis Secim");
			break;
		}
	}
	
	return 0;
}
