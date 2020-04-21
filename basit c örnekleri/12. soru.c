#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int x,y;
	bas:
	printf("Negatif bir sayý giriniz : ");
	scanf("%d",&x);
	if (x<0){
	
	y= x*(-1);
}
    else {
    	goto bas;
	}
	printf("%d",y);
	
	getch();
}
