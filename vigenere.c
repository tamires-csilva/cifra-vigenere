#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char codificarString(char *palavras, int tamanhoPalavra, char *chave, int tamanhoChave);

int main (void)
{
    char chave[] = "segredosecreto";
    char palavras[100];
    int verificaAcao;
    printf("Digite a frase:\n");
    fgets(palavras, 100, stdin);
    codificarString(palavras, strlen(palavras)-1, chave, strlen(chave));
    printf("\n");  
    return 0;
}

char codificarString(char *palavras, int tamanhoPalavra, char *chave, int tamanhoChave){
    
    for(int i = 0, j = 0; i < tamanhoPalavra; i++, j++)
    {
        if(j>=tamanhoChave){
            j=0;
        }
        if(palavras[i] == ' '){
            i++;
        }
        char res = ((toupper(palavras[i]))+chave[j])%25+65;
        printf("%s",&res);
    }
}
