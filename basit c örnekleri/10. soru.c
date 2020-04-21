#include <stdio.h>

main()
{
   
    int i, sayi, tumToplam = 0, tekCarpim = 1, ciftToplam = 0;

   
    do
    {
        printf("Bir sayi giriniz giriniz: ");
        scanf("%d", &sayi);
    } while (sayi <= 20);
    
  
    for(i = 10; i < sayi; i++)
        tumToplam += i;

    
    for(i = 5; i < sayi; i++)
        if(i % 2 == 1)
            tekCarpim *= i;

    for(i = 14; i < sayi; i++)
        if(i % 2 == 0)
            ciftToplam += i;


    printf("10-N Toplam: %d\n5-N Tek Carpim: %d\n14-N Cift Toplam: %d", tumToplam, tekCarpim, ciftToplam);

    getch();
}
