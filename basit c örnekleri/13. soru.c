#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
    float gir=0,onda=0;
    int tam=0;
    printf("Sayý giriniz: (ondalýk kýsmý virgül kullanarak giriniz)\n");
    scanf("%f", &gir);
    tam=gir;
    onda=gir-tam;
    printf("Ondalýk kýsým  ===> %f\n", onda);
    printf("Tam kýsým ===> %d ", tam);
    getch();
}

