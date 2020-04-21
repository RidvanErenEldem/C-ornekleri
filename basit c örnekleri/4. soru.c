#include<stdio.h>


main()
{
int a,b,c;
int max,min,ort;


printf("Ilk sayiyi giriniz :");
scanf("%d",&a);
printf("Ikinci sayiyi giriniz :");
scanf("%d",&b);
printf("Ucuncu sayiyi giriniz :");
scanf("%d",&c);

if ((a>b)&&(a>c)) max=a;
else if ((b>a)&&(b>c)) max=b;
else max=c;


if ((a<b)&&(a<c)) min=a;
else if ((b<a)&&(b<c)) min=b;
else min=c;


if ((a>b)&&(a<c)) ort=a;
else if ((a<b)&&(a>c)) ort=a;
else if ((b>a)&&(b<c)) ort=b;
else if ((b<a)&&(b>c)) ort=b;
else ort=c;

printf ("%d>%d>%d",max,ort,min);
getch();
}
