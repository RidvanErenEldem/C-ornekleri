#include <stdio.h>

main()
{
	int x;
	
	printf("Suyun sicakligini giriniz :");
	scanf("%d",&x);
	
	if(x<100 && x>0)
	{
		printf("Su sivi haldedir.");
	}
	else if (x<0)
	{
		printf("Su kati haldedir.");
	}
	else if(x==0)
	{
		printf("su kati ve sivi karisimi halindedir");
	}
	else if (x==100)
	{
		printf("su sivi ve gaz karisimi halindedir");
	}
	else
	{
		printf("Su gaz haldedir");
	}
	getch();
}
