#include<stdio.h>

int main(){
//declarando variaveis
//carta 1
char estado[3];

char code_card[4];
 
char nome_cidade [50];

int population , n_tour;

float area, pib;

//carta2

char estadoc2[3];

char code_cardc2[4];
 
char nome_cidadec2 [50];

int populationc2 , n_tourc2;

float areac2, pibc2;

//recebendo informações
//carta1





printf("Digite o estado (representado por uma letra de A a H) :\n");
scanf("%s",&estado);



printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf("%s",&code_card);

getchar();

printf("Digite o nome da cidade: \n");
fgets(nome_cidade,50,stdin);



printf("Digite a população da cidade: \n");
scanf("%i",&population);




printf("Digite o número de pontos turísticos: \n");
scanf("%i",&n_tour);




printf("Digite a área da cidade: \n");
scanf("%f",&area);



printf("Digite o pib: \n");
scanf("%f",&pib);



printf("----------agora digite as informações da carta 2-------\n");

//carta2



printf("Digite o estado (representado por uma letra de A a H) :\n");
scanf("%s",&estadoc2);



printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf("%s",&code_cardc2);

getchar();

printf("Digite o nome da cidade: \n");
fgets(nome_cidadec2,50,stdin);



printf("Digite a população da cidade:\n ");
scanf("%i",&populationc2);




printf("Digite o número de pontos turísticos:\n ");
scanf("%i",&n_tourc2);




printf("Digite a área da cidade: \n");
scanf("%f",&areac2);



printf("Digite o pib: \n");
scanf("%f",&pibc2);



//impressão cartas
//carta 1
printf("-----carta-1----\n");



printf("o estado: %s\n", estado);




printf("código da carta: %s \n",code_card);




printf("nome da cidade: %s \n", nome_cidade);




printf("população da cidade: %i \n", population);




printf("número de pontos turísticos: %i \n",n_tour);





printf("área da cidade: %.2f \n", area);




printf("pib:%.2f \n", pib);


//carta2

printf("-----carta-2----\n");



printf("o estado: %s\n", estadoc2);




printf("código da carta: %s \n",code_cardc2);




printf("nome da cidade: %s \n", nome_cidadec2);




printf("população da cidade: %i \n", populationc2);




printf("número de pontos turísticos: %i \n",n_tourc2);





printf("área da cidade: %.2f \n", areac2);




printf("pib:%.2f \n", pibc2);















}
