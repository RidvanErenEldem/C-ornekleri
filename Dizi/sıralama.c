#include <stdio.h>
#include <stdlib.h>
 
// Dizideki sayýlarý sýralama (Küçükten büyüðe)
 
int main(){
 
    int dizi[50], gecici, adet,i,j;
    
    printf("Kac adet sayi girilecek: ");
    scanf("%d", &adet);  //Kaç adet sayý girileceðini kullanýcýdan alýyoruz
    
    for(i=0; i<adet; i++){  // Kullanýcýdan sayýlarý alýyoruz
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    for(i=0; i<adet-1;i++){ 
        for(j=i+1; j<adet; j++){
            if(dizi[i] > dizi[j]){
                gecici = dizi[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                dizi[i] = dizi[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                dizi[j] = gecici; // Dizi[j] ye ise dizi[i] deðerini kaydediyoruz. Bu deðeri gecicide saklamýþtýk
            }
        }
    }
 
        for(i=0; i<adet; i++)
            printf("%d ", dizi[i]);
        
    
    printf("\n");
    getch();
}
