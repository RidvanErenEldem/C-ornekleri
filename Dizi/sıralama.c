#include <stdio.h>
#include <stdlib.h>
 
// Dizideki say�lar� s�ralama (K���kten b�y��e)
 
int main(){
 
    int dizi[50], gecici, adet,i,j;
    
    printf("Kac adet sayi girilecek: ");
    scanf("%d", &adet);  //Ka� adet say� girilece�ini kullan�c�dan al�yoruz
    
    for(i=0; i<adet; i++){  // Kullan�c�dan say�lar� al�yoruz
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    for(i=0; i<adet-1;i++){ 
        for(j=i+1; j<adet; j++){
            if(dizi[i] > dizi[j]){
                gecici = dizi[i]; // Dizi[i] yi kaybetmemek i�in gecicide tutuyoruz
                dizi[i] = dizi[j]; //dizi[i] yi dizi[i] den daha k���k olan dizi[j] kaydediyoruz
                dizi[j] = gecici; // Dizi[j] ye ise dizi[i] de�erini kaydediyoruz. Bu de�eri gecicide saklam��t�k
            }
        }
    }
 
        for(i=0; i<adet; i++)
            printf("%d ", dizi[i]);
        
    
    printf("\n");
    getch();
}
