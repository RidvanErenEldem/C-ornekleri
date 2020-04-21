#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *dosya;
	int a[10]={5,8,9,4,6,2,0,3,1};
	dosya=fopen("bilgi.dat","wb");
	if(dosya == NULL)
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		fwrite(a,sizeof(int),10,dosya);
		//fwrite(kayit_degiskeni, kayit_uzunluðý, sayi, dosya);
		fclose(dosya);
	}
	
	FILE *oku;
	int b[10], i;
	oku = fopen("bilgi.dat","rb");
	if(dosya == NULL)
	{
		printf("dosya acilamadi");
		exit(0);
	}
	else
	{
		fread(b,sizeof(int),10,oku);
		for(i=0;i<10;i++)
			printf(" %d ",b[i]);
	}
	getch();
}
