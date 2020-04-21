#include <stdio.h>

main()
{
	int x,y;
	
	printf("Ilk tam sayiyi giriniz :");
	scanf("%d",&x);
	printf("Ikinci sayiyi giriniz :");
	scanf("%d",&y);
	
	if(x >y)
	{
		printf("%d buyuktur %d", x,y);
	}
	else if (y > x)
	{
		printf("%d buyuktur %d", y,x);
	}
	else
	{
		printf("%d esittir %d", x,y);
	}
	getch();
}
