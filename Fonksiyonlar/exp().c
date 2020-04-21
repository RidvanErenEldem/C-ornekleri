#include <stdio.h>
#include <math.h>

main()
{
	double x=1.5, sonuc;
	int y=5, z=2;
	
	//exp() 2.718281....
	
	printf("e uzeri 5 = %f\n", exp(y));
	
	//sqrt() karekök
	
	printf("5 in karakoku = %f\n", sqrt(y));
	
	sonuc = sqrt(y);
	
	printf("5 in karekoku = %f\n", sonuc);
	
	//pow() üs alma
	
	printf("5 in 2. kuvveti = %f\n", pow(y,z));
	
	//log() logaritma aldýrma
	
	printf("log 5 = %f \n", log(y));
	
	//floor alta yuvarlama
	
	printf("floor(x) = %f\n", floor(x));
	
	//ceil üste yuvarlama
	
	printf("ceil(x) = %f\n", ceil(x));
	
	//fabs 
	
	printf("-5 in mutlak degeri = %f\n", fabs(-5));
	
	//modf tam ve ondalik kýsmýný ayýrýr
	double ondalik, tam;
	ondalik= modf(x, &tam);
	printf("Ondalik = %f, Tam = %f \n", ondalik , tam);
	
	//fmod kalaný verir
	
	printf("fmod(57.8,5.5) = %f\n", fmod(57.8,5.5));
	
	// cos, sin, cosh, sinh, tan, tanh
	double deger=0.5 , pi=3.14;
	printf("Cos = %f \n", cos(deger)*180/pi);
	printf("Sin = %f \n", sin(deger)*180/pi);
	printf("cosh = %f \n", cosh(deger)*180/pi);
	printf("sinh = %f \n", sinh(deger)*180/pi);
	
	getch();
	
	
}
