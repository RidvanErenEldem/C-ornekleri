#include <stdio.h>
double ortalama(double deger[], int i)
{
	double *p, toplam=0;
	p=deger;
	printf("%d\n", i);
	for(i=0;i<5;i++)
	{
		toplam=toplam+*(p+i);	
	}
	toplam=toplam/5;
	
	return toplam;	
}
void main()
{
	double dizi[5]={1.1,2.2,3.3,4.4,5.5};
	double ort;
	ort=ortalama(dizi,5);
	printf("Ortalama ===> %0.2f", ort);
	
	getch();
}
