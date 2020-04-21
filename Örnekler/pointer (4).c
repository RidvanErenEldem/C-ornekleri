#include <stdio.h>
void kopyala1(char *s1,char *s2)
{
	int i;
	for(i=0;(s1[i]=s2[i])!=NULL;i++);
}
void kopyala2(char *s1,char *s2)
{
	for(;(*s1=*s2)!=NULL;s1++,s2++);
}

void main()
{
	char metin1[10], *metin2="Merhaba";
	char metin3[10], metin4[]="gule gule";
	
	kopyala1(metin1,metin2);
	printf("Metin1 = %s", metin1);
	kopyala2(metin3,metin4);
	printf("\nMetin3 = %s", metin3);
	getch();	
}
