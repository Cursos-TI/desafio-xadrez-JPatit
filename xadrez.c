#include <stdio.h>

//void da torre
void Torre(int T) {
    if (T == 0) return;
    printf("Direita\n");
    Torre(T - 1);
}

//void do bispo
void Bispo(int B) {
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima e Esquerda\n");
        }
    }
}

//void da rainha
void Rainha(int R) {
    if (R == 0) return;
    printf("Esquerda\n");
    Rainha(R - 1);
}

//void do cavalo
void Cavalo(int C1, int C2) {
    for (int i = 0; i < C1; i++) {
        for (int j = 0; j < C2; j++) {
            if (i + 2 < C1 && j + 1 < C2) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                return;
            }
        }
    }
}

int main() {
    int movertorre = 5;
    int moverbispo = 5;
    int moverrainha = 8;
    int movercavalo1 = 8;
    int movercavalo2 = 8;

    // Torre
    printf("Torre anda para:\n");
    Torre(movertorre);
    printf("\n");

    // Bispo
    printf("Bispo anda para:\n");
    Bispo(moverbispo);
    printf("\n");

    // Rainha
    printf("Rainha anda para:\n");
    Rainha(moverrainha);
    printf("\n");

    // Cavalo
    printf("Cavalo anda para:\n");
    Cavalo(movercavalo1, movercavalo2);
    printf("\n");

    return 0;
}