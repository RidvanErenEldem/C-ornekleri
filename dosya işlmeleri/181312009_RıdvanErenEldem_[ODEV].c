/*  Ad� Soyad�: R�dvan Eren Eldem
	Tarih: 22.05.2019
	Binary sistemde okuma yazma
	C ile yaz�ld�
	e-mail: ridvaneren2012@gmail.com
*/ 
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish"); /* T�rk�e karakterler kullanabilmek i�in */
	
	FILE *dat;
	char isim[] = "R�dvan Eren Eldem Beklenen not ===> 100"; /* ilk yazd�rca��m de�i�ken */
	dat=fopen("dat_dosyas�.dat","wb"); /* dosyay� a��yor yazma i�lemi yapama��m i�in w yu ikili sistemde yaz�rca��m i�inde b yi kulland�m */
	if(dat == NULL) /* dosyay� a�amasa uyarmas� i�in */
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		fwrite(isim,sizeof(char),isim.lenght,dat);
		printf("dat dosyas�n�n �uan ki i�eri�i ===> %s",isim);
		fclose(dat);
	}
	
	
	
	
	FILE *degistir;
	degistir=fopen("dat_dosyas�.dat","w+b"); /* burda i�eri�i de�i�tirce�im i�in w+b kulland�m (w+b dosyan�n i�eri�ini temizliyor) */
	char isim2[] = "Ahmet Bircan Beklenen not ===> 100";
	if(degistir == NULL) /* dosyay� a�amazsa diye */
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		printf("\n�imdi dosyan�n i�eri�i ===> \n");
		fwrite(isim2,sizeof(char),35,degistir); /* dosyan�n i�eri�ini de�i�tiriyor */
		printf("de�i�tirilmi� dat dosyas�n�n i�eri�i ===> %s",isim2);
		fclose(degistir);
	}
	
	getch();
}
