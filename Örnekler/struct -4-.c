#include <stdio.h>
#include <string.h>
main()
{
	struct dogumtarihi{
		int yil;
		int ay;
	};
	struct kisi_bilgileri {
		char isim[40];
		int boy;
	}kisi1={"Ridvan", 175},kisi2;
	
	
	
	printf("isim = %s\n",kisi1.isim);
	printf("boy = %d\n",kisi1.boy);
	
	getch();
}

