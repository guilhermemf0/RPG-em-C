#include <stdio.h>
#include <string.h>
#include "funcoes.h"
#include "structs.h"

int main() {
    int dificuldade;
    Personagem jogador;

    introducao(jogador.nome, &dificuldade);

    fichaDoPersonagem(jogador);

    printf("| Dificuldade: ");

    if(dificuldade == 4) printf("Osso\n");
    else if(dificuldade == 3) printf("Díficil\n");
    else if(dificuldade == 2) printf("Normal\n");
    else if(dificuldade == 1) printf("Fácil\n");

    return 0;
}
