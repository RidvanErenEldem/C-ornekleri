#include <stdio.h>

main()
{
	struct {
		char isim[40];
		int boy;
		struct{
			int yil;
			int ay;
			int gun;
		}dogum_gunu;
	}kisi;
	
	printf("adý giriniz: \n"); scanf("%s", kisi.isim);
	printf("boyu giriniz: \n"); scanf("%d", &kisi.boy);
	printf("dogum tarihini giriniz: (gg-aa-yyyy)\n");
	scanf("%d-%d-%d", &kisi.dogum_gunu.gun, &kisi.dogum_gunu.ay, &kisi.dogum_gunu.yil);
	printf("isim = %s\n boy = %d\n Dogum gunu = %d.%d.%d", kisi.isim,kisi.boy,kisi.dogum_gunu.gun,kisi.dogum_gunu.ay,kisi.dogum_gunu.yil);
	getch();
}
