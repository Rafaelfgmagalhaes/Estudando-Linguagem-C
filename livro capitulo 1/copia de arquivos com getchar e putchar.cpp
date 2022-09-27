#include <stdio.h>
#include <stdlib.h>

// copia entrada para saida; 1 versao
int main()
{
    int c;

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar ();
    }
    
}