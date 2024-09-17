//arquivo feito pra testar a funcao scores individualmente

#include <stdio.h>

void acumular_scores (int score_ind) { //Precisa testar essa funcao 
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

int main () {
    int pontos = 30;
    acumular_scores(pontos);
    return 0;
}