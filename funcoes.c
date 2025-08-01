#include <stdio.h>
#include <string.h>
#include "structs.h"

char alfabetoM[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";

void toLower(char *palavra){
    for(int i = 0; palavra[i] != '\0'; i++){
        for(int j = 0; j < 26; j++){
            if(palavra[i] == alfabetoM[j]) {
                palavra[i] = alfabeto[j];
                break;
            }
        }
    }
}

void introducao(char *nome, int *diff) {
    char name[30];

    printf("======================\n");
    printf("||     Binary       ||\n");
    printf("||       Bones      ||\n");
    printf("======================\n\n");

    printf("| Insira seu nome: ");
    scanf("%29s", nome);

    strcpy(name, nome);
    toLower(name);

    if(strcmp(name, "sans") != 0){
        printf("| Escolha a Dificuldade: \n");
        printf("| [1] Fácil [2] Normal [3] Díficil\n");
        printf("| Escolha: ");
        scanf("%d", diff);
    } else {
        printf("| Sans?\n| Dificuldade 'Osso' foi escolhida, não tem como voltar atrás...\n");
        *diff = 4;
    }
}

void fichaDoPersonagem(Personagem j) {
    printf("\n| Nome do Personagem: %s\n", j.nome);
    printf("| Vida do Personagem: %d\n", j.vida);
    printf("| Força do Personagem: %d\n", j.forca);
}
