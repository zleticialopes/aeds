#include <stdio.h>
#include "io.h"
#include <string.h>

int main(void)
{
    // definir dados
    int x = -1;
    double y = 0.5;
    char c = '0';
    char s[10];

    // identificar
    printf("%s\n", "aulasLab");
    // acoes
    printf("Antes x= %i\n", x);
    x = IO_readint("Qual o valor de x?\n");
    printf("Depois x = %d\n", x);
    printf("Antes y = %lf\n", y);
    printf("Antes c = %c\n", c);
    printf("Antes s = %s\n", s);
    s = IO_readstring("Qual o valor de s?");
    strcpy(s, IO_readstring("Qual o valor de s?"));
    c = IO_readchar("Qual o valor de c?");
    printf("Depois c = %c\n", c);
    y = IO_readdouble("Qual o valor de y?");
    printf("Depois x = %lf\n", y);
    // encerrar
    printf("%s\n", "Apertar ENTER");
    getchar();
    return (0);
}

/*
=======================================================================
------ NOTAS DA AULA:
IO_printf(); = printa a mensagem
IO_scanf(); = recebe dados do usuario
IO_flush(); = limpa o buffer

- definir string (ou cadeia de caracteres):
char s[10];

=======================================================================
*/