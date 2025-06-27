#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_F 20
#define MAX_L 25

int main() {
    int F, L;
    char sala[MAX_F][MAX_L][3]; // Cada assento guarda "XX" ou "--"
    char bilhete[5];

    // Lê F e L
    scanf("%d %d", &F, &L);

    // Inicializa todos os lugares como vazios "--"
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < L; j++) {
            strcpy(sala[i][j], "--");
        }
    }

    // Lê os bilhetes até EOF
    while (scanf("%s", bilhete) != EOF) {
        int fileira = bilhete[0] - 'A';
        int lugar = atoi(&bilhete[1]) - 1;

        if (fileira >= 0 && fileira < F && lugar >= 0 && lugar < L) {
            strcpy(sala[fileira][lugar], "XX");
        }
    }

    // Imprime cabeçalho
    for (int j = 0; j < L; j++) {
        printf("%02d ", j + 1);
    }
    printf("\n");

    // Imprime da última fileira até a primeira (de cima para baixo)
    for (int i = F - 1; i >= 0; i--) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < L; j++) {
            printf("%s ", sala[i][j]);
        }
        printf("\n");
    }

    return 0;
}

