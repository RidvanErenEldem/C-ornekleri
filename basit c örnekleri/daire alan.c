#include <stdio.h>

main()

{
	float r,alan,c;
	
	printf("Dairenin yari capini girniz:");
	scanf("%f",&r);
	
	alan=3.14*r*r;
	c=2*3.14*r;
	printf("%f dairenin alani\n%f cevresi",alan,c);
	
	getch();
}
