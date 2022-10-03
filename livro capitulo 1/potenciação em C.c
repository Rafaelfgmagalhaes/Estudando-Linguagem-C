#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("\nDigite outro numero: ");
    scanf("%d", &b);
    int pot = pow(a, b);
    printf("\n%d elevado a %d e igual a: %d ", a, b, pot);
}
