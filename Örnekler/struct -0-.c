#include <stdio.h>
main()
{
	struct{
		int yil;
		int ay;
		int gun;
	}dogum_gunu, kardes;
	
	printf("dogum gununuzu giriniz (gg-aa-yyyy) : ");
	scanf("%d-%d-%d",&dogum_gunu.gun, &dogum_gunu.ay, &dogum_gunu.yil);
	printf("\n\nDogum gununuz : %d.%d.%d\n",dogum_gunu.gun,dogum_gunu.ay,dogum_gunu.yil);
	
	printf("Kardesiniz dogum gununu giriniz (gg-aa-yyyy) : ");
	scanf("%d-%d-%d",&kardes.gun,&kardes.ay,&kardes.yil);
	printf("\n\nKardesinin dogum gunu : %d.%d.%d",kardes.gun,kardes.ay,kardes.yil);
	getch();
}
