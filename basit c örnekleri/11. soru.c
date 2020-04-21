#include <stdio.h>
#include <locale.h>
main() {
    
    setlocale(LC_ALL, "Turkish");
    char harf[1];
    int i = 0, x;
    
    
    printf("Bir küçük harf giriniz: ");
    gets(harf);
    
    int fark = 'a' - 'A';
    
    while (harf[i] != '\0') {
        
        if (harf[i] >= 'A' && harf[i] <= 'Z') {
            harf[i] += fark;
        } else if (harf[i] >= 'a' && harf[i] <= 'z') {
            harf[i] -= fark;
        }
        printf("----%c", harf[i]);
        i++;
        
    }
    
 
    getch();
}
