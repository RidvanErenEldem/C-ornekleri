#include <stdio.h>
char* sehir_bul(int sayi)
{
	switch(sayi)
	{
		case 70:
			return "Karaman";
		//	break;
		case 34:
			return "Istanbul";
		//	break;
		case 42:
			return "Konya";
		//	break;
		default:
			return "Unknown";
	}
}


void main()
{
	int plaka;
	
	printf("plakayi giriniz: "); scanf("%d", &plaka);
	printf("\n%s", sehir_bul(plaka));
	getch();
}
