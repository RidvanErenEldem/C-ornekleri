#include <stdio.h>
//Girilen ad�m say�s� kadar fibonnaci dizisini bulduran c program�

main()
{
	int x=0, y=1, num, i, deg;
	
	printf("Kac tane adim olsun ?  ");
	
	scanf("%d", &num);
	
	printf("%d  ",x);
	printf("%d  ",y);
	
	for(i=0;i<num-2;i++)
	{
		printf("%d  ", x+y);
		
		deg=x;
		
		x=y;
	
		y=deg+y;
		
	}
	
	getchar();
	getchar();
	
	return 0;
}
