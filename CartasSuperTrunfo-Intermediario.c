#include <stdio.h>
#include <stdbool.h>
  
int main(){
    
    char estado[3];
    char codigo_da_carta[3];
    char cidade[50];
    int pontos_turisticos_carta1;
    int pontos_turisticos_carta2;
    float populacao_carta1;
    float populacao_carta2;
    float area_km2_carta1;
    float area_km2_carta2;
    float pib_carta1;
    float pib_carta2;
    float pib_per_capta_carta1;
    float pib_per_capta_carta2;
    float densidade_populacional_carta1;
    float densidade_populacional_carta2;
    float super_poder_carta1;
    float super_poder_carta2;

    printf("\n\n");   
    printf("carta 1\n");

    printf("Digite o estado: ");
    scanf(" %s", estado);

    printf("digite o codigo da carta: ");
    scanf(" %s", codigo_da_carta);

    printf("digite a cidade: ");
    scanf(" %s", cidade);
   
    printf("digite a população: ");
    scanf(" %f", &populacao_carta1);
   
    printf("digite a area: ");
    scanf(" %f", &area_km2_carta1);

    printf("digite o pib: ");
    scanf(" %f", &pib_carta1);

    printf("digite total ponto turisticos: ");
    scanf(" %d", &pontos_turisticos_carta1);

    printf("densidade populacional: ");
    densidade_populacional_carta1 = populacao_carta1 / area_km2_carta1;
    printf("%.2f\n", densidade_populacional_carta1);

    printf("pib per capta: ");
    pib_per_capta_carta1 = pib_carta1 / populacao_carta1;
    printf("%.2f\n", pib_per_capta_carta1);


    printf("super poder: ");
    super_poder_carta1 = pontos_turisticos_carta1 + area_km2_carta1 + pib_carta1 + pib_per_capta_carta1 + populacao_carta1 + (1 / densidade_populacional_carta1);
    printf("%.2f\n", super_poder_carta1);

    

    //
    // CARTA 2
    //
  
    printf("\n\n");  
    printf("carta 2\n");
   
    printf("Digite o Estado:");
    scanf(" %s", estado);
    
    printf("digite o codigo da carta:");
    scanf(" %s", codigo_da_carta);

    printf("digite a cidade:");
    scanf(" %s", cidade);

    printf("digite a populacao:");
    scanf(" %f", &populacao_carta2);

    printf("digite a area:");
    scanf(" %f", &area_km2_carta2);

    printf("digite o pib:");
    scanf(" %f", &pib_carta2);

    printf("digite total ponto turisticos:");
    scanf(" %d", &pontos_turisticos_carta2);

    printf("densidade populacional: ");
    densidade_populacional_carta2 = populacao_carta2/ area_km2_carta2;
    printf(".2%f\n", densidade_populacional_carta2);

    printf("pib per capta: ");
    pib_per_capta_carta2 = pib_carta2 / populacao_carta2;
    printf("%.2f\n", pib_per_capta_carta2);

    printf("super_poderes_carta2: ");
    pib_per_capta_carta2 = pontos_turisticos_carta2 + populacao_carta2 + area_km2_carta2 + pib_carta2 + pib_per_capta_carta2 + densidade_populacional_carta2;
    printf(".2%f\n", pib_per_capta_carta2);

    


    //
    // comparação if e esle entre area carta1 e area carta.
    //
    if( area_km2_carta1 > area_km2_carta2){
      printf("Carta1 venceu!\n");

    }else{
        printf("Carta2 venceu!|n");
     }
    
     
        
    
       
   

    return 0;
}
