/* bir fonksiyon i�erisinde o fonksiyon kendini tekrar �a��r�yor ise buna �zyenilemeli(recursive) fonksiyon denir. */
#include <stdio.h>

int rec(int x) /* fonksiyon */
{
	if(x>1)
		rec(x-2); /* Burda kendini �a��r�yor */
		printf("%d ", x);
}

main()
{
	rec(100);
	getch();
}



