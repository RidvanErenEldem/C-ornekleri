/* Kullanýcý tarafýndan girilen metinin þifrelenip,
 çözülmesini saðlayan C programý. */
 
#include <stdio.h> 
#include <string.h> 


void sifrele(/*parametreler*/char sifre[], int anahtar)
{
  /* Ýþaretsiz (unsigned) ön eki kullanýldýðý taktirde,
	 veri tipi ile saklanacak deðerin sýfýr ve sýfýrdan büyük olmasý saðlanýr.*/
  unsigned int i;
  for (i = 0; i < strlen(sifre); ++i)
  // strlen : karakter dizisini verir. 
  // ++i : deðiþkenin deðerini bir arttýr. sonra döngüyü iþlet. 
  {
  	
    sifre[i] = sifre[i] - anahtar;
  }
}

void sifrecoz(char sifre[], int anahtar)
{
  unsigned int i;
  for (i = 0; i < strlen(sifre); ++i)
  {
    sifre[i] = sifre[i] + anahtar;
  }
}

int main()
{
	// 0xFACA unicode karakter 
  char sifre[20];
  printf("Sifrelenecek Metni Giriniz: \n ");
  scanf("%s", sifre);
  printf("Girdiginiz deger	: %s\n", sifre);
  sifrele(sifre, );
  printf("Sifrelenmis bicimi	: %s\n", sifre);
  sifrecoz(sifre, );
  printf("Sifresi cozulmus bicimi	: %s\n", sifre);
  return 0;
}
