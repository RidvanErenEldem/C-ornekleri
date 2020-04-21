#include <stdio.h>

main()
{
	int x,y,z;
	
	printf("Kenarlari birer bosluk birakarak giriniz :");
	scanf("%d %d %d",&x, &y,&z);
	
	if(x == y && y == z)
	{
		printf("Es kenar ucgen olabilir");
	}
	else if(x == y || x == z || y ==z )
	{
		printf("Ikiz kenar ucgen olabilir");
	}
	else
	{
		printf("Cesit kenar ucgen olabilir");
	}
	getch();
}
