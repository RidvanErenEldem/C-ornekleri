#include <stdio.h>
//Maded by The Real Slim Shady
main()
{
	int sayi1, sayi2, toplam;
	char karakter;
//	do{
	bas:
	printf("1. sayiyi giriniz\n");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz\n");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
	printf("Sonuc = %d\n",toplam);
	printf("Devam etmek istiyor musunuz ? [E] / [e]\n");
	karakter=getch();
//	}
	if(karakter=='E' || karakter=='e')
	{
		goto bas;
	}
	printf("© Maded by The Real Slim Shady ©");
	getch();
	
}
