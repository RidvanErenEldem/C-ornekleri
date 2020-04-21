#include <stdio.h>
void adres_goster(int *dizi[])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("i=%d,	j=%d,	=> %d	adresleri => %p \n",i ,j, dizi[i][j], &dizi[i][j]);
	}
}


void main()
{
	int Ankara[2]={0,1}, Istanbul[2]={2,3}, Karaman[2]={4,5};
	int *tablo[]={Ankara, Istanbul, Karaman};
	adres_goster(tablo);
}
