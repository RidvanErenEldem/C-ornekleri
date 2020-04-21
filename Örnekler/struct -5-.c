#include <stdio.h>
#include <string.h>
main()
{
	struct dogumtarihi{
		int yil;
		int ay;
		int gun;
	};
	struct kisi_bilgileri {
		char isim[40];
		int boy;
		struct dogumtarihi tarih;
	};
	struct kisi_bilgileri kisi[3]={"Ridvan" ,175, {1999,8,10}, "Eren", 170, {2000,4,12}, "Cihat", 172, {2000,11,21} };
	
	int i;
	for(i=0;i<3;i++)
	{
		printf("isim = %s\nboy = %d\ndogum tarihi = %d.%d.%d\n", kisi[i].isim, kisi[i].boy, kisi[i].tarih.gun, kisi[i].tarih.ay, kisi[i].tarih.yil);
	}
	
	
	getch();
}

