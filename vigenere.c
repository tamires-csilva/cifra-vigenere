#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char codificarString(char *palavras, int tamanhoPalavra, char *chave, int tamanhoChave);

int main (void)
{
    char chave[] = "abc";
    char palavras[100];
    int verificaAcao;
    printf("Digite a frase:\n");
    fgets(palavras, 100, stdin);
    printf("Digite: \n 1 - Para crifrar\n 2 - Para decifrar\n");
    scanf("%d", &verificaAcao);
    switch (verificaAcao)
    {
    case 1:
        codificarString(palavras, strlen(palavras)-1, chave, strlen(chave));

        break;
    case 2:
       // decodificarPalavra(*palavra);
        break;
    default:
        printf("Tente novamente");
        break;
    }
    
  printf("\n");  
  return 0;
}

char codificarString(char *palavras, int tamanhoPalavra, char *chave, int tamanhoChave){
    printf("%d \n",tamanhoPalavra);
    
    for(int i = 0, j = 0; i < tamanhoPalavra; i++, j++)
    {
        if(j>=tamanhoChave){
            j=0;
        }
        if(palavras[i] == ' '){
            i++;
        }
        char res = ((toupper(palavras[i]))+chave[j])%25+65;
        printf("%s %d \n",&res, j);
    }
}