#include <stdio.h>

main()
{
	int tutulan, rasgele;
	srand(time(NULL));
	baslangic:
	tutulan=rand()%100;
	
    printf("Sayiyi Giriniz:",tutulan);
    scanf("%d", &rasgele);
    if(tutulan == rasgele)
        printf("You are goddamn right\n");
    
    
    	else if (tutulan > rasgele)
    	    printf("Artirin\n");
    	else
    	    printf("Azaltin\n");
    	goto baslangic;
	}


