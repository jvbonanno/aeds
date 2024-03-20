#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// detecta se eh a string FIM
bool isFIM(char *s)
{
    return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

// verificar se eh palindromo
bool ehPALINDROMO(char *s)
{
    int n = strlen(s) - 1;
    for (int i = 0; i < n; i++, n--)
    {
        if (s[i] != s[n])//compara a primeira letra com a ultima
        {
            return false;// nao eh palindromo
        }
    }
    return true;//eh palindromo
}

//principal
int main()
{
    char *s = (char *)malloc(1000);
    do
    {
        scanf(" %[^\n]s", s);

        if (isFIM(s) == false)
        {
            if (ehPALINDROMO(s) == true)
            {
                printf("SIM");
            }
            else if (ehPALINDROMO(s) == false)
            {
                printf("NAO");
            }
            printf("\n");
        }

    } while (isFIM(s) == false);

    return 0;
}