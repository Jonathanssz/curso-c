#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int matricula = 0, final_numero = 0;

    printf("Forneça o Número da Matrícula: ");
    scanf("%d", &matricula);

    final_numero = matricula % 10;

    switch (final_numero) {
    case 0:
        printf("Pagamento em Janeiro.");
        break;
    case 1:
        printf("Pagamento em Fevereiro.");
        break;
    case 2:
        printf("Pagamento em Março.");
        break;
    case 3:
        printf("Pagamento em Abril.");
        break;
    default:
        printf("Pagamento em Maio.");
        break;
    }

    return 0;
}