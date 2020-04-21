#include <stdio.h>
#include <locale.h>
#include <string.h>

main()

{
	setlocale(LC_ALL, "Turkish");
	char ad[10]="ayþe";
	
	int i;
	printf("%20s\n", ad);
	printf("%20.2s\n", ad);
	//printf("%s\n\n\n\n", ad);
	for(i=0;ad[i]!='\0';i++)
	{
		printf("%c", ad[i]);
	}
	getch(); 
}
