#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* imprime a tabela de convers?o Fahrenheit-Celsius, para fahhr = 0,20, ..., 300 */

int main()
{
    setlocale(LC_ALL, "");
    
    float fahr, celsius;
    int inicio, fim, incr;


    inicio=0; // limite inferior da tablela//
    fim=300; //limite superior //
    incr=20; // incremento //

    printf("==============================================\n");
    printf("     TABELA DE CONVERS?O DE TEMPERATURA\n");
    printf("==============================================\n\n");
    printf("FAHRENHEIT - CELSIUS\n");
    printf("----------------------\n");

    fahr = inicio;
    while(fahr <= fim) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + incr;

        
    }

    printf("\n==============================================\n");
    system("pause");

    return 0;
}