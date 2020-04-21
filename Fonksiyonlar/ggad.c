//EKRANDAN SADECE HARF YADA RAKAM GÝRÝÞÝ SAÐLAYAN PROGRAM
//isdigit=Karakterin sayý olup olmadýðýna bakar
//isalpha= Karakterin alfabetik bir karakter olup olmaddýðýna bakar
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
void main()
{
       setlocale(LC_ALL,"Turkish");
	   int secim,s;
       char h, x[250];
       
       printf("\n[1] HARF ");
       printf("\n[2] SAYI ");
       printf("\n");
       tekrar:
       printf("\nSEÇÝM YAPINIZ"); scanf("%d",&secim);
       switch (secim){
       	case 1:
       	do{
       		printf("\nHARF GÝRÝNÝZ\n"); scanf("%c",&h);
		   }while(isalpha(h)==0);                 
		printf("\nGÝRDÝÐÝNÝZ HARF %c\n",h);
       	break;
       	case 2:
       	do{
       		printf("\nSAYI GÝRÝNÝZ\n"); scanf("%d",&s);
		   }while(isdigit(s)==0);          
		printf("\nGÝRDÝÐÝNÝZ SAYI %d\n",s);
		break;
		
		default:
		printf("\nYanlýþ Seçim Yaptýnýz\n");
		goto tekrar;
	}
}
