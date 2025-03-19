#include <stdio.h>
  
int main(){
    
    char estado[2];
    char codigo_da_carta[3];
    char cidade[3];
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

    //float populacao_carta1 = 10000;
    //float populacao_carta2 = 500;

   


    printf("\n\n");   
    printf("carta 1\n");

    printf("Digite o Estado: ");
    scanf(" %s", &estado);

    printf("digite o codigo da carta: ");
    scanf(" %s", &codigo_da_carta);

    printf("digite a cidade: ");
    scanf(" %s", &cidade);
   
    printf("digite a população: ");
    scanf(" %f", &populacao_carta1);
   
    printf("digite a area ");
    scanf(" %f", &area_km2_carta1);

    printf("digite o pib ");
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


    // printf("\n\n");   
    // printf("carta 1\n");
   
    // printf("Digite o Estado:");
    // scanf(" %c", &estado);
    
    // printf("digite o codigo da carta:");
    // scanf(" %s", &codigo_da_carta);
   
    // printf("digite a cidade:");
    // scanf(" %s", &cidade);
   
    // printf("digite a populacao:");
    // scanf(" %d", &populacao_carta1);
   
    // printf("digite a area:");
    // scanf(" %f", &area_km2);
    
    // printf("digite o pib:");
    // scanf(" %f", &pib);

    // printf("digite total ponto turisticos:");
    // scanf(" %d", &pontos_turisticos);

    // printf("densidade populacional: ");
    // densidade_populacional = populacao_carta2 / area_km2;
    // printf("%.2f\n", densidade_populacional);

    // printf("pib per capta:");
    // pib_per_capta = pib / populacao_carta2;
    // printf("%.2Ff\n", pib_per_capta);

    // printf("super poder: ");
    // super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao_carta2 + (1 / densidade_populacional);
    // printf("%.2f\n", super_poder);



    // printf("\n\n");   
    // printf("carta 1\n");
   
    // printf("Digite o Estado:");
    // scanf(" %c", &estado);
    
    // printf("digite o codigo da carta:");
    // scanf(" %s", &codigo_da_carta);
   
    // printf("digite a cidade:");
    // scanf(" %s", &cidade);
   
    // printf("digite a populacao:");
    // scanf(" %d", &populacao_carta1);
   
    // printf("digite a area:");
    // scanf(" %f", &area_km2);
    
    // printf("digite o pib:");
    // scanf(" %f", &pib);
    
    // printf("digite total ponto turisticos:");
    // scanf(" %d", &pontos_turisticos);

    // printf("densidade populacional: ");
    // densidade_populacional = populacao_carta1 / area_km2;
    // printf("%.2f\n", densidade_populacional);

    // printf("pib per capta:");
    // pib_per_capta = pib / populacao_carta1;
    // printf("%.2f\n", pib_per_capta);

    // printf("super poder: ");
    // super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao_carta1 + (1 / densidade_populacional);
    // printf("%.2f\n", super_poder);

   
    // printf("\n\n");   
    // printf("carta 1\n");
   
    // printf("Digite o Estado:");
    // scanf(" %c", &estado);
    
    // printf("digite o codigo da carta:");
    // scanf(" %s", &codigo_da_carta);
   
    // printf("digite a cidade:");
    // scanf(" %s", &cidade);
   
    // printf("digite a populacao:");
    // scanf(" %d", &populacao_carta1);
   
    // printf("digite a area:");
    // scanf(" %f", &area_km2);
    
    // printf("digite o pib:");
    // scanf(" %f", &pib);
    
    // printf("digite total ponto turisticos:");
    // scanf(" %d", &pontos_turisticos);

    // printf("densidade populacional: ");
    // densidade_populacional = populacao_carta1 / area_km2;
    // printf("%.2f\n", densidade_populacional);

    // printf("pib per capta:");
    // pib_per_capta = pib / populacao_carta1;
    // printf("%.2f\n", pib_per_capta);

    // printf("super poder: ");
    // super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao_carta1 + (1 / densidade_populacional);
    // printf("%.2f\n", super_poder);


    printf("\n\n");  
    printf("carta 2\n");
   
    printf("Digite o Estado:");
    scanf(" %s", &estado);
    
    printf("digite o codigo da carta:");
    scanf(" %s", &codigo_da_carta);

    printf("digite a cidade:");
    scanf(" %s", &cidade);

    printf("digite a populacao:");
    scanf(" %f", &populacao_carta2);

    printf("digite a area:");
    scanf(" %f", &area_km2_carta2);

    printf("digite o pib:");
    scanf(" %f", &pib_carta2);

    printf("digite total ponto turisticos:");
    scanf(" %d", &pontos_turisticos_carta2);

    printf("densidade populacional: ");
    densidade_populacional_carta2 = populacao_carta2 / area_km2_carta2;
    printf(".2%f\n", densidade_populacional_carta2);

    printf("pib per capta:");
    pib_per_capta_carta2 = pib_carta2 / populacao_carta2;
    printf("%.2f\n", pib_per_capta_carta2);

    printf("super poder: ");
    super_poder_carta2 = pontos_turisticos_carta2 + area_km2_carta2 + pib_carta2 + pib_per_capta_carta2 + populacao_carta2 + (1 / densidade_populacional_carta2);
    printf("%.2f\n", super_poder_carta2);


    // printf("\n\n");  
//     printf("carta 2\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao_carta2);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//    printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao_carta2 / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao_carta2;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao_carta2 + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n");  
//     printf("carta 2\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//     printf("digite a populacao:");
//     scanf(" %d", &populacao_carta2);

   
//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao_carta2 / area_km2;
//     printf("%f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao_carta2;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao_carta2 + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



//     printf("\n\n");  
//     printf("carta 2\n");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao_carta2);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//      printf("digite o pib:");
//     scanf(" %f", &pib);

//      printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao_carta2 / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao_carta2;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao_carta2 + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



    printf("populacao cartao1: %f\n", populacao_carta1);
    printf("populacao cartao2: %f\n", populacao_carta2);

    int resultado = populacao_carta1 > populacao_carta2;
    printf("populacao_carta1 > populacao_carta2: %d\n\n\n", resultado);
    
    printf("pontos_turisticos_carta1: %d\n", pontos_turisticos_carta1);
    printf("pontos_turisticos_carta2: %d\n", pontos_turisticos_carta2);

    resultado = pontos_turisticos_carta1 < pontos_turisticos_carta2;
    printf("pontos_turisticos_carta1 < pontos_turisticos_carta2: %d\n\n\n", resultado);

    printf("area_km2_carta1: %d\n", pontos_turisticos_carta1);
    printf("area_km2_carta1: %d\n", area_km2_carta2);

    resultado2 = area_km2_carta1 == area_km2_carta2;
    printf("area_km2_carta1 == area_km2_carta2: %d\n\n\n", resultado2);

    printf("pib_carta1: %d\n", pib_carta1);
    printf("pib_carta2: %d\n", pib_carta2);

    resultado3 = pib_carta1 != pib_carta2;
    printf("pib_carta1 != pib_carta2: %d\n\n\n", resultado3);




    

    
   
//     printf("\n\n");  
//     printf("carta 3\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//      printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


   
//     printf("\n\n");  
//     printf("carta 3\n");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



//     printf("\n\n");  
//     printf("carta 3\n");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//      printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n"); 
//     printf("carta 3\N");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);


//    printf("\n\n"); 
//    printf("carta 4\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %f", &area_km2);

//    printf("digite o pib:");
//    scanf(" %f", &pib);

//    printf("digite total ponto turisticos:");
//    scanf(" %d", &pontos_turisticos);

//    printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



//    printf("\n\n");
//    printf("carta 4\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %f", &area_km2);
  
//    printf("digite o pib:");
//    scanf(" %f", &pib);

//    printf("digite total ponto turisticos:");
//    scanf(" %d", &pontos_turisticos);

//    printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);


//    printf("\n\n"); 
//    printf("carta 4\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//      printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



//     printf("\n\n"); 
//     printf("carta 4\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);


//     printf("\n\n"); 
//     printf("carta 5\n");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//      printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("\n\n");
//     printf("carta 5\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %.2f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n");
//     printf("carta 3\n");
    
//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %f", &area_km2);

//    printf("digite o pib:");
//    scanf(" %f", &pib);

//    printf("digite total ponto turisticos:");
//    scanf(" %d", &pontos_turisticos);

//    printf("densidade populacional: ");
//    densidade_populacional = populacao / area_km2;
//    printf("%.2f\n", densidade_populacional);

//    printf("pib per capta:");
//    pib_per_capta = pib / populacao;
//    printf("%.2f\n", pib_per_capta);

//    printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


   
//    printf("\n\n"); 
//    printf("carta 5\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n"); 
//     printf("carta 6\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
     
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n"); 
//     printf("carta 6\n");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf(".2%f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n"); 
//     printf("carta 6\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//    printf("digite o pib:");
//    scanf(" %f", &pib);

//    printf("digite total ponto turisticos:");
//    scanf(" %d", &pontos_turisticos);

//    printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

   
//     printf("\n\n"); 
//    printf("carta 6\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//     printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//    scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n"); 
//     printf("carta 7\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//     scanf(" %s", &cidade);

//     printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//      printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("\n\n");
//     printf("carta 7\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



//     printf("\n\n");
//     printf("carta 7\n");

//    printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);



//     printf("\n\n");
//     printf("carta 7\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//     printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);

   
//     printf("\n\n");
//     printf("carta 8\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);
    
//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n");
//     printf("carta 8\n");

//     printf("Digite o Estado:");
//     scanf(" %c", &estado);
    
//     printf("digite o codigo da carta:");
//     scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//    printf("digite a populacao:");
//     scanf(" %d", &populacao);

//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n");
//     printf("carta 8\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//    printf("digite a cidade:");
//    scanf(" %s", &cidade);

//    printf("digite a populacao:");
//    scanf(" %d", &populacao);

//     printf("digite a area:");
//     scanf(" %f", &area_km2);

//     printf("digite o pib:");
//     scanf(" %f", &pib);

//     printf("digite total ponto turisticos:");
//     scanf(" %d", &pontos_turisticos);

//     printf("densidade populacional: ");
//     densidade_populacional = populacao / area_km2;
//     printf("%.2f\n", densidade_populacional);

//     printf("pib per capta:");
//     pib_per_capta = pib / populacao;
//     printf("%.2f\n", pib_per_capta);

//     printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


//     printf("\n\n");
//     printf("carta 8\n");

//    printf("Digite o Estado:");
//    scanf(" %c", &estado);
    
//    printf("digite o codigo da carta:");
//    scanf(" %s", &codigo_da_carta);

//     printf("digite a cidade:");
//     scanf(" %s", &cidade);

//     printf("digite a populacao:");
//     scanf(" %d", &populacao);

//    printf("digite a area:");
//     scanf(" %f", &area_km2);

//    printf("digite o pib:");
//    scanf(" %f", &pib);

//    printf("digite total ponto turisticos:");
//    scanf(" %d", &pontos_turisticos);

//    printf("densidade populacional: ");
//    densidade_populacional = populacao / area_km2;
//    printf("%.2f\n", densidade_populacional);

//    printf("pib per capta:");
//    pib_per_capta = pib / populacao;
//    printf(".2%f\n", pib_per_capta);

//    printf("super poder: ");
//     super_poder = pontos_turisticos + area_km2 + pib + pib_per_capta + populacao + (1 / densidade_populacional);
//     printf("%.2f\n", super_poder);


return 0;
}
