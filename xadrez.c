#include <stdio.h>

int main(){

    //movendo o bispo usando a estrutura de repetição "for"
    for (int b = 0; b < 5; b++){
        printf("Bispo anda para cima e direita!\n");
    }

    printf("\n");

    //movendo torre usando a estrutura "while"
    int t = 0;

    while (t < 5){
        printf("Torre anda para direita!\n");
        t++;
    }
    
    printf("\n");

    //por fim, movendo rainha com a estrutura "do-while"
    int r = 0;

    do{
        printf("Rainha anda para esquerda\n");
        r++;
    }   while (r < 8);
    

    return 0;
}