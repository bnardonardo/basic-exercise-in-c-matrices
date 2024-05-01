#include <stdio.h>
int tabela[4][3] = {{9, 5, 8}, {5, 14, 12}, {0, 18, 3}, {14, 36, 23}};

void mostrartabela (){
int lin, col;

for (lin=0;lin<4;lin++){
    for (col=0;col<3;col++){
        printf("  %i ", tabela [lin][col]);
    }
    printf("\n");
}
}

int main(){
mostrartabela();

float soma, media;

    soma = (9 + 4 + 8 + 5 + 14 + 12 + 0 + 18 + 3);
    printf("\n soma %f", soma);
    media = (soma / 9);
    printf("\n media %f", media);
    printf("\n");



return(0);
}
