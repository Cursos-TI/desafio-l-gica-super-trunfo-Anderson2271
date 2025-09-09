#include <stdio.h>
#include <string.h>

struct Estado {
    char nome[40];
    char código[8];
    char capital[40];
    int população;
    float area;
    long long pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

};

 struct Estado baralho[2];
 
 void iniciarBaralho() {
      // Carta 1: São Paulo
      strcpy(baralho[0].nome, "São Paulo");
      strcpy(baralho[0].código, "SP");
      strcpy(baralho[0].capital, "São Paulo");
      baralho[0].população = 45000000;
      baralho[0].area = 250000.1;
      baralho[0].pib = 220000000000;
      baralho[0].pontos_turisticos = 150;
      baralho[0].densidade_populacional = baralho[0].população / baralho[0].area;
      baralho[0].pib_per_capita = baralho[0].pib / baralho[0].população;

      
      // Carta 2: Rio de Janeiro
      strcpy(baralho[1].nome, "Rio de Janeiro");
      strcpy(baralho[1].código, "RJ");
      strcpy(baralho[1].capital, "Rio de Janeiro");
      baralho[1].população = 17700000;
      baralho[1].area = 44500.1;
      baralho[1].pib = 92000000000;
      baralho[1].pontos_turisticos = 185;
      baralho[1].densidade_populacional = baralho[1].população / baralho[1].area;
      baralho[1].pib_per_capita = baralho[1].pib / baralho[1].população;

    }

 void exibirCarta(struct Estado carta) {
     printf("-------------------------------\n");
     printf("Nome do Estado: %s\n", carta.nome);
     printf("Código da Carta: %s\n", carta.código);
     printf("Capital: %s\n", carta.capital);
     printf("População: %ld\n", carta.população);
     printf("Area: (km2): %.2f\n", carta.area);
     printf("PIB (R$): %lld\n", carta.pib);
     printf("Pontos Turisticos: %d\n", carta.pontos_turisticos);
     printf("Densidade Populacional (hab/km2): %.2f\n", carta.densidade_populacional);
     printf("Pib per Capita (R$): %.2f\n", carta.pib_per_capita);
     
     printf("-------------------------------\n");

 }

 int main() {
     iniciarBaralho();

     printf("Carta 1:\n");
     exibirCarta(baralho[0]);

     printf("\nCarta 2:\n");
     exibirCarta(baralho[1]);

     return 0;





 }
 