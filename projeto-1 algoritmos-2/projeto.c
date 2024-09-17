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

char* carregar_palavra () {
    FILE *pont_dados;
    static char palavra_str[20]; // usa-se o static para que o endereco do ponteiro persista 
    pont_dados = fopen("sem_acentos.txt", "r"); //carregando o arquivo.txt com as palavras utilizadas no projeto
    if (pont_dados == NULL) {
        printf("Ocorreu um erro ao abrir o arquivo.");
    }
    while (fscanf(pont_dados, "%s", palavra_str) != EOF) {
        return palavra_str;
    }
}

//PROGRAMA PRINCIPAL 
int main () { //a funcao de carregar a palavra esta gerando sempre a primeira letra do dicionario, precisa arrumar isso.
    char *word;
    word = carregar_palavra();
    printf("%s\n", word);

    
    return 0;
}
