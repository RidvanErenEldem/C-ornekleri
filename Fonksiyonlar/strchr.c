#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	char cumle[]="Karaman Toki Elmaþehir Mahallesi";
	char *ilk, *son;	
	
	ilk=strchr(cumle, 'a' );
	son=strrchr(cumle, 'a');
	
	if(ilk!=NULL && son!=NULL)
	{
		printf("Ýlknokta = %d\n",ilk-cumle);
		printf("Sonnokta = %d", son-cumle);
	}
	else
		printf("no match");
		
	getch();
}
//strchr ilk konumu gösterir
//strrchr son konumy gösterir
