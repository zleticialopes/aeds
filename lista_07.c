#include "io_h"

void method01(void)
{
// definir dados 
int array[10];
int n = 0;
int x = 0;
int y = 0;

FILE *arquivo = fopen("DADOS.TXT", "wt");

// identificar 
IO_println("999999_AED1_Method_01\n");

// acoes
do
{
    n = IO_readint("\nQuantos dados?"\n);
    while(n < 0 || y < n; y = y+1;)
    {
        for(y = 0; y < n; y =y+1)
        {
            x = IO_readint("\nx= ");
            array[y] = x; //guardar
        } // end for
        for (y = 0; y < n; y = y+1)
        {
            fprintf(arquivo,"%d\n",n); // gravar
        } // end for
        fclose(arquivo);
    } // encerrar
    IO_pause("\nApertar ENTER\n");
} // end method_01()

    
}   

/*
void method04(void)
{
    // definir dados
    int array[10];
    int n = 0;
    int x = 0;
    int y = 0;
    
    FILE *arquivo = fopen("DADOS.TXT", "rt");
    
    // identificar
    IO_println("999999_AED1_Method_04\n");
    
    // acoes 
    IO_fscanf(arquivo, "%d"< &n);
    if(n > 0)
    {
        int array[n]; // reservar
        while(! feof(arquivo) && y < n)
        {
            array[y] = x; // guardar
            y = y+1; // contar
            IO_fscanf(arquiv, "%d", &x);
            
        } // end while
        for (x = 0; x < y; x = x+1)
        {
            printf("%.2d: %d\n", x, array[x]);
        }// end for
        fclose(arquivo);
    }
}
*/

int main()
{
    
}
    
    