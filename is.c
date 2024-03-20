
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isFIM(char *s)
{
    return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}
 bool IsVogal(char *s) {
        bool RESULTADO = true;

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
                    || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
                    || s[i] == 'o' || s[i] == 'u') {

            } else {
                RESULTADO = false;
            }

        }
        return RESULTADO;
    }

   bool IsConsoante(char *s) {
        bool RESULTADO = true;

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
                    || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
                    || s[i] == 'o' || s[i] == 'u' || s[i] < 'A') {
                RESULTADO = false;
            }
            if (s[i] > 'Z' && s[i] < 'a') {
                RESULTADO = false;
            }
        }
        return RESULTADO;

    }

     bool IsInteiro(char *s) {
        bool RESULTADO = true;

        for (int i = 0; i < strlen(s); i++) {

            if (s[i] < '0' || s[i] > '9') {

                RESULTADO = false;
            }

        }
        return RESULTADO;
    }
      bool IsReal(char *s) {
        bool RESULTADO = true;
        int i = 0;
        int QtdPonto = 0, QtdVirgula = 0;
        do {
            if (s[i] >= '0' && s[i] <= '9') {
                RESULTADO = true;
            } else {
                if(s[i] == ',' || s[i] == '.'){
                    RESULTADO = true;
                }else{
                    RESULTADO = false;
                }
                if(s[i] == ','){
                    QtdVirgula++;
                }
                if(s[i] == '.'){
                    QtdPonto++;
                }
                
            }
            if(QtdPonto >1 || QtdVirgula >1){
               RESULTADO = false;
            }


            i++;
        }while(i<strlen(s)&&RESULTADO!=false);
        return RESULTADO;

    }

int main()
{

    
    char *entrada = (char*)malloc(1000);
    do
    {
       
        
        scanf(" %[^\n]s", entrada);
        
        if(isFIM(entrada) == false){

        if (IsVogal(entrada) == true)
        {
            printf("SIM");
        }else{
            printf("NAO");
        }
        printf(" ");
        if (IsConsoante(entrada) == true)
        {
            printf("SIM");
        }else{
            printf("NAO");
        }
        printf(" ");
        if (IsInteiro(entrada) == true)
        {
            printf("SIM");
        }else{
            printf("NAO");
        }
        printf(" ");
        if (IsReal(entrada) == true)
        {
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
        
        
}

    } while (isFIM(entrada) == false);

    return 0;
}
