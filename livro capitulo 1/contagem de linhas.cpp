#include <stdio.h>
#include <stdlib.h>

//contagem de linhas na entrada.
int main()
{
    int c, nl;

    nl = 0;

    while((c = getchar()) != EOF){
        if( c == '\n'){
            ++nl;
        }
    }

    printf("%d\n", nl);
    system("pause");
}
