/*  Adý Soyadý: Rýdvan Eren Eldem
	Tarih: 22.05.2019
	Binary sistemde okuma yazma
	C ile yazýldý
	e-mail: ridvaneren2012@gmail.com
*/ 
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish"); /* Türkçe karakterler kullanabilmek için */
	
	FILE *dat;
	char isim[] = "Rýdvan Eren Eldem Beklenen not ===> 100"; /* ilk yazdýrcaðým deðiþken */
	dat=fopen("dat_dosyasý.dat","wb"); /* dosyayý açýyor yazma iþlemi yapamaðým için w yu ikili sistemde yazýrcaðým içinde b yi kullandým */
	if(dat == NULL) /* dosyayý açamasa uyarmasý için */
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		fwrite(isim,sizeof(char),isim.lenght,dat);
		printf("dat dosyasýnýn þuan ki içeriði ===> %s",isim);
		fclose(dat);
	}
	
	
	
	
	FILE *degistir;
	degistir=fopen("dat_dosyasý.dat","w+b"); /* burda içeriði deðiþtirceðim için w+b kullandým (w+b dosyanýn içeriðini temizliyor) */
	char isim2[] = "Ahmet Bircan Beklenen not ===> 100";
	if(degistir == NULL) /* dosyayý açamazsa diye */
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		printf("\nþimdi dosyanýn içeriði ===> \n");
		fwrite(isim2,sizeof(char),35,degistir); /* dosyanýn içeriðini deðiþtiriyor */
		printf("deðiþtirilmiþ dat dosyasýnýn içeriði ===> %s",isim2);
		fclose(degistir);
	}
	
	getch();
}
