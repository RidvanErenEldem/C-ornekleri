#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	char cumle[]="Karaman Toki Elma�ehir Mahallesi";
	char *ilk, *son;	
	
	ilk=strchr(cumle, 'a' );
	son=strrchr(cumle, 'a');
	
	if(ilk!=NULL && son!=NULL)
	{
		printf("�lknokta = %d\n",ilk-cumle);
		printf("Sonnokta = %d", son-cumle);
	}
	else
		printf("no match");
		
	getch();
}
//strchr ilk konumu g�sterir
//strrchr son konumy g�sterir
