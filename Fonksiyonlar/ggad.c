//EKRANDAN SADECE HARF YADA RAKAM G�R��� SA�LAYAN PROGRAM
//isdigit=Karakterin say� olup olmad���na bakar
//isalpha= Karakterin alfabetik bir karakter olup olmadd���na bakar
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
       printf("\nSE��M YAPINIZ"); scanf("%d",&secim);
       switch (secim){
       	case 1:
       	do{
       		printf("\nHARF G�R�N�Z\n"); scanf("%c",&h);
		   }while(isalpha(h)==0);                 
		printf("\nG�RD���N�Z HARF %c\n",h);
       	break;
       	case 2:
       	do{
       		printf("\nSAYI G�R�N�Z\n"); scanf("%d",&s);
		   }while(isdigit(s)==0);          
		printf("\nG�RD���N�Z SAYI %d\n",s);
		break;
		
		default:
		printf("\nYanl�� Se�im Yapt�n�z\n");
		goto tekrar;
	}
}
