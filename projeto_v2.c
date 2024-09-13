#include <stdio.h>
#include <stdlib.h>

int busca_linear_str (char vetor[], int n, char palavra) {
    int i;
    for (i=0; i < n; i++) {
        if (vetor[i] == palavra) {
            return i;
        }
    }
}

char* ler_proxima_palavra (FILE *pont_dados) {
    static char palavra[100];
    if (fscanf(pont_dados, "%s", palavra) == 1) {
        return palavra;
    } else {
        return NULL;
    }

}

//PROGRAMA PRINCIPAL 
int main () { 
    FILE *pont_dados;
    static char palavra_str[20]; // usa-se o static para que o endereco do ponteiro persista 
    pont_dados = fopen("sem_acentos.txt", "r"); //carregando o arquivo.txt com as palavras utilizadas no projeto
    if (pont_dados == NULL) {
        printf("Ocorreu um erro ao abrir o arquivo.");
        return 1;
    }
    char *word;
    word = ler_proxima_palavra(pont_dados);
    if (word != NULL) {
        printf("%s\n", word);
    }
    
    word = ler_proxima_palavra(pont_dados);
     if (word != NULL) {
        printf("%s\n", word);
    }
    return 0;
}
