#include <stdio.h>
int tabela[3][3] = {{9, 5, 8}, {5, 14, 12}, {0, 18, 3}};

void mostrartabela (){
int lin, col;

for (lin=0;lin<3;lin++){
    for (col=0;col<3;col++){
        printf("  %i ", tabela [lin][col]);
    }
    printf("\n");
}
}


int main(){
    mostrartabela();
return(0);
}

