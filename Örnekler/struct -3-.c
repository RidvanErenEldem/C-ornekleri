#include <stdio.h>
#include <string.h>
main()
{
	struct kisi_bilgileri {
		char isim[40];
		int boy;
	}kisi1,kisi2;
	
	strcpy(kisi1.isim, "Ridvan");
	kisi1.boy = 175;
	
	printf("isim = %s\n",kisi1.isim);
	printf("boy = %d\n",kisi1.boy);
	
	getch();
}

