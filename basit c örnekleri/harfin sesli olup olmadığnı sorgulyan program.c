#include <stdio.h>
#include <conio.h>
int main(void)
{
char harf = ' ';
printf("Sesli harflerin kontrolu");
printf("\n===========================");
printf("\nBir harf giriniz :");
scanf("%c",&harf); 
fflush(stdin);
if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U' || harf == 'a' || harf == 'e' || harf == 'i' || harf == 'o' || harf == 'u' )
printf("\n%c bir sesli harftir.",harf); 
else
printf("\n%c bir sessiz harftir",harf);
getch();
}


