#include <stdio.h>
#include <stdlib.h>
//contador de linhas, espaços e tabulaçoes.
int main()
{
    int  c, nl, esp, tab;

    nl = 0;
    esp = 0;
    tab = 0;

    while((c = getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
            if(c == ' '){
                ++esp;
            }
                if(c == '\t'){
                    ++tab;
                }
    }

    printf("O numero de linhas e: %d\n ", nl);
    printf("O numero de espacos digitados e: %d\n ", esp);
    printf("O numero de tabulacoes digitadas foi de: %d\n ", tab);

    system("pause");
}