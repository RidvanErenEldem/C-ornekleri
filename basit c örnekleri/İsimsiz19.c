#include<stdio.h>
//Fakt�riyel Hesab� 2000
main()
{
      int faktoriyel=1,sayi;
      printf("Faktoriyeli alinacak sayiyi girin.:");
      scanf("%d",&sayi);
      
      while(sayi>=1)
    {
        faktoriyel*=sayi;
        sayi--;
    }
    
    printf("Faktoriyel sonucu.: %d dir",faktoriyel);
    getch();
}
