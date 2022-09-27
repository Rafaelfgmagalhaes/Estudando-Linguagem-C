#include <stdio.h>
#include <stdlib.h>

//conta caracteres de entrada, 1 versao.
int main()
{
    long nc;

    nc = 0;
    while(getchar() != EOF){
        ++nc;
    }

    printf("%1d\n", nc);

    system("pause");
}