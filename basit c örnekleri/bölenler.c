//Dýþarýdan girilen bir sayýnýn çarpanlarýna ayýran kod

#include <stdio.h>

main()
{
	int x,i,bol;
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	bol=x;
	printf("1 \t");
	for (i=2; i<=x; i++)
	{  

	while (bol%i==0)
	{
		printf("%d \t", i);
		bol=bol/i;
		if (i==1) break;
		
	}
	
    }
    getch();
}
