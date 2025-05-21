#include <stdio.h>

int main (){

char estado1 [20], estado2 [20];
char cod1[5], cod2[5];
char nome1[30], nome2[30];
int pop1, pop2;
float area1, area2;
float pib1, pib2;
int pt1, pt2;
float dp1, dp2;
float ppc1, ppc2;
float superpoder1, superpoder2;

printf("Olá, seja bem-vindo ao Super Trunfo!\n");

printf("Digite o estado da cidade A: \n");
scanf(" %[^\n]", &estado1);

printf("Digite o código da cidade A: \n");
scanf("%s", &cod1);

printf("Digite o nome da cidade A: \n");
scanf(" %[^\n]", &nome1);

printf("Digite a população da cidade A: \n");
scanf("%d", &pop1);

printf("Digite a área da cidade A em km²: \n");
scanf(" %f", &area1);

printf("Digite o pib da cidade A em bilhões de reais: \n");
scanf(" %f", &pib1);

printf("Digite o número de pontos turísticos da cidade A: \n");
scanf("%d", &pt1);

printf("\nAgora vamos para a cidade B!\n");

printf("\nDigite o estado da cidade B: \n");
scanf(" %[^\n]", &estado2);

printf("Digite o codigo da cidade B: \n");
scanf("%s", &cod2);

printf("Digite o nome da cidade B: \n");
scanf(" %[^\n]", &nome2);

printf("Digite a população da cidade B: \n");
scanf("%d", &pop2);

printf("Digite a área da cidade B em km²: \n");
scanf(" %f", &area2);

printf("Digite o pib da cidade B em bilhões de reais: \n");
scanf(" %f", &pib2);

printf("Digite o número de pontos turísticos da cidade B: \n");
scanf("%d", &pt2);

dp1 = pop1 / area1;
dp2 = pop2 / area2;
ppc1 = (pib1 * 1000000000) / pop1; 
ppc2 = (pib2 * 1000000000) / pop2; 
superpoder1 = (float) (pop1 + area1 + pib1 + pt1 + ppc1 + dp1);
superpoder2 = (float) (pop2 + area2 + pib2 + pt2 + ppc2 + dp2);

printf("\nCidade A:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais \n Número de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado1, cod1, nome1, pop1, area1, pib1, pt1, dp1, ppc1);
printf("\nCidade B:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área²: %.2f km²\n PIB: %.2f bilhões de reais \n Número de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado2, cod2, nome2, pop2, area2, pib2, pt2, dp2, ppc2);

printf("\nAgora vamos comparar as cartas!\n");

printf("População1 > População2: (%d)\n", pop1 > pop2);
printf("Área1 > Área2: (%d)\n", area1 > area2);
printf("PIB1 > PIB2: (%d)\n", pib1 > pib2);
printf("Número de pontos turísticos 1 > Número de pontos turísticos 2: (%d)\n", pt1 > pt2);
printf("Densidade Populacional 1 > Densidade Populacional 2: (%d)\n", dp1 < dp2);
printf("PIB per Capita 1 > PIB per Capita 2: (%d)\n", ppc1 > ppc2);
printf("Superpoder 1 > Superpoder 2: (%d)\n", superpoder1 > superpoder2);


return 0;

}