#include <stdio.h>
  
int main(){
    char nome[20];
    int codigo;
    int populacao;
    int area;
    int pib;
    int turistico;
    
    printf("digite o nome da cidade\n");
    scanf(" %s", &nome);

    printf("digite o codigo da cidade\n");
    scanf(" %d", &codigo);

    printf("digite a população\n");
    scanf(" %f",  &populacao);
    
    printf("digite a area\n");
    scanf(" %f", &area);

    printf("digite pib\n");
    scanf(" %f", &pib);

    printf("digite o numero de pontos turisticos\n");
    scanf(" %d", &turistico);

return 0;

}

 

