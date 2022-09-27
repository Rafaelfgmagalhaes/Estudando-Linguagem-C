#include <stdio.h>
#include <stdlib.h>

//conta caracteres de entrada; 2 versao
int main()
{
    double nc;

    for(nc = 0; getchar() != EOF; ++nc);
        printf("%.0f\n", nc);

    system("pause");
}