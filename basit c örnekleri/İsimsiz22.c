//Basamak Say�s� Bulan Program � R�dvan Eren Eldem �
#include<stdio.h>

int main()
{
    int sayi,basamaks;
    
    printf("Bir sayi giriniz = ");
    scanf("%d",&sayi);
    basamaks=1;
    do {
        sayi=sayi/10;
        basamaks++;
        }
        while(sayi>=10);
        printf("Basamak sayisi = %d",basamaks);
        
    getch();
}

