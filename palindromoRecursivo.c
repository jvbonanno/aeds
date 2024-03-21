#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// detecta se eh a string fim
bool ehFIM(char *s)
{
    return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

// verifica se eh palindromo
bool ehPALINDROMO(char *s, int posI, int posF, int dif)
{

    if (posF > posI)
    {

        if (s[posI] != s[posF])
        {
            dif = false;
        }
        else
        {
            dif = ehPALINDROMO(s, posI + 1, posF - 1, dif);
        }
    }

    return dif;
}

// principal
int main()
{

    char *entrada = (char *)malloc(1000);
    bool Dif = true;
    do
    {

        scanf(" %[^\n]s", entrada);

        if (ehFIM(entrada) == false)
        {
            int Tamanho = strlen(entrada) - 1;
            if (ehPALINDROMO(entrada, 0, Tamanho, Dif) == true)
            {
                printf("SIM\n");
            }
            else
                printf("NAO\n");
        }

    } while (ehFIM(entrada) == false);

    return 0;
}