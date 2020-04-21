#include <stdio.h>

main()
{
    int birinciBasamak, ikinciBasamak, toplam, i;

    
    for(i = 1; i <= 99; i++)
    {
        birinciBasamak = i % 10;
        
        ikinciBasamak = (i - birinciBasamak) / 10;

        toplam = birinciBasamak + ikinciBasamak;
        if(toplam % 2 == 1)
            printf("%d\n", i);
    }
    getch();
}
