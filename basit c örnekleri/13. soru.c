#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
    float gir=0,onda=0;
    int tam=0;
    printf("Say� giriniz: (ondal�k k�sm� virg�l kullanarak giriniz)\n");
    scanf("%f", &gir);
    tam=gir;
    onda=gir-tam;
    printf("Ondal�k k�s�m  ===> %f\n", onda);
    printf("Tam k�s�m ===> %d ", tam);
    getch();
}

