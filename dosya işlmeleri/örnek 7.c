#include <stdio.h>
#include <stdlib.h>

typedef struct ogr
{
	int no;
	char *isim;
}ogrenci;

main()
{
	FILE *dosya;
	int secim;
	ogrenci a;
	while(1){
	printf("Secim yapýnýz\n");
	printf("1-Kayit girisi\n");
	printf("2-Kayit arama\n");
	printf("3-Cikis\n");
	printf("Seciminiz..: ");
	scanf("%d",&secim);
	if(secim==1)
	{
		dosya=fopen("yaz_stuct.txt","a");
	if(dosya==NULL)
	{
		printf("dosya acýlamadý");
		exit(0);
	}
	else
	{
		a.isim=(char *)malloc(sizeof(char)*20);
		printf("isim: "); scanf("%s",a.isim);
		printf("no: "); scanf("%d",&a.no);
		fprintf(dosya,"%s %d \n",a.isim,a.no);
		free(a.isim);
		fclose(dosya);
	}
	}
	if(secim == 2)
	{
		FILE *oku;
		char ad[20];
		ogrenci b;
		oku=fopen("yaz_stuct.txt","a");
		if(oku == NULL)
		{
			printf("dosya acilmadi"); exit(0);
		}
		else
		{
			printf("isim: "); scanf("%s",ad);
			b.isim=(char *)malloc(sizeof(char)*20);
			while(!feof(oku))
			{
				fscanf(oku,"%s %d \n",b.isim,&b.no);
				if (strcmp(ad,b.isim)==0)
				{
					printf("%s %d\n",b.isim,b.no);
				}
			}
			fclose(oku);
		}
	}
	}
	getch();

}
