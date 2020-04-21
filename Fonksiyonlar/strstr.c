#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	char cumle[]="Karaman Toki Elmaþehir Mahallesi";
	char *ptr;
	
	ptr=strstr(cumle , "T");
	if (ptr == NULL)
	{
		printf("no match");
		}	
	else
	{
		printf("\n%d", ptr-cumle);
	}
		
}

//strstr()
