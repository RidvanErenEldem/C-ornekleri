#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
	int a,b,c;
    printf("=============================> Çarpým Tablosu <=============================");
    printf("\n\n");

    for(a=1;a<11;a++){

    for(b=1;b<6;b++){
    c=a*b;
    printf("%d x %d = %d\t",a,b,c);
    } printf("\n");
    }
    printf("\n");
    for(a=1;a<11;a++){
    	for(b=6;b<11;b++){
    		c=a*b;
    		printf("%d x %d = %d\t",a,b,c);
		} printf("\n");
	}
    getch();

}
