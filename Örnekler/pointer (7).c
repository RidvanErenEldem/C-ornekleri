#include <stdio.h>
#include <math.h>

float* karekokal(float *deger)
{
	*deger =sqrtf(*deger);
	return deger;
	
}

void main()
{
	float sayi=15.99, *p;
	
	p=karekokal(&sayi);
	printf("Sonuc = %f", *p);
}
