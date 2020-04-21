/* bir fonksiyon içerisinde o fonksiyon kendini tekrar çaðýrýyor ise buna özyenilemeli(recursive) fonksiyon denir. */
#include <stdio.h>

int rec(int x) /* fonksiyon */
{
	if(x>1)
		rec(x-2); /* Burda kendini çaðýrýyor */
		printf("%d ", x);
}

main()
{
	rec(100);
	getch();
}



