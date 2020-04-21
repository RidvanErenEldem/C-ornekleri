#include <stdio.h>
void main()
{
	int n,k,x,m;
	printf("Satýr Sayýsý Giriniz = ");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		int c=1;
		for(x=0;x<n-k;x++)
		{
			printf(" ");
		}
		for(m=0;m<=k;m++)
		{
			printf(" %d ",c);
			c=c*(k-m)/(m+1);
		}
		
		printf("\n");
	}
	printf("\n");
	
	getch();
}
