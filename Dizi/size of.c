#include <stdio.h>

main()
{
	int boyut,i,dizi[]={2,5,8,9,5};
	boyut=sizeof dizi / sizeof*dizi;
	printf("%d\n",boyut);
	getch();
	int dizi2[boyut];
	for(i=0;i<boyut;i++)
	{
		dizi2[i]=dizi[boyut-i-1];
		printf("%d,",dizi2[i]);
	}
	getch();
}
