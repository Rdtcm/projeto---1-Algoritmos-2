#include <stdio.h>
#include <stdlib.h>

void boas_vindas () {
    printf("Bem Vindo ao nosso projeto de algoritmos-2\n");
    printf("descubra a palavra certa em 6 tentativas \n a cada tentativa você será informado o quão perto chegou\n");
}

void acumular_scores (int score_ind) { //Funcao testatada e funcionando
    FILE *score;
    score = fopen("scores.txt", "a");//arquivo aberto em modo a para acumular dados.
    if (score == NULL) {
        printf("Ocorreu um erro ao carregar o arquivo!");
    } 
    else 
    {
        fprintf(score, "%d\n", score_ind);
        fclose(score);
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
    boas_vindas();

    FILE *pont_dados; 
    static char palavra_str[20]; // usa-se o static para que o endereco do ponteiro persista 
    pont_dados = fopen("sem_acentos.txt", "r"); //carregando o arquivo.txt em modo de leitura
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
