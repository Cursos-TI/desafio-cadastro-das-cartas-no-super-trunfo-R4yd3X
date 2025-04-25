#include <stdio.h>

int main() {

char estado1 [20], estado2 [20];
char cod1[5], cod2[5];
char nome1[30], nome2[30];
int pop1 = 12325000, pop2 = 6748000;
float area1 = 1521.11, area2 = 1200.25;
float pib1 = 699.28, pib2 = 300.50;
int pt1 = 50, pt2 = 30;

printf("Digite o estado da cidade A: \n");
scanf(" %[^\n]", &estado1);

printf("Digite o código da cidade A: \n");
scanf("%s", &cod1);

printf("Digite o nome da cidade A: \n");
scanf(" %[^\n]", &nome1);

printf("Digite a população da cidade A: \n");
scanf("%d", &pop1);

printf("Digite a área da cidade A: \n");
scanf(" %f", &area1);

printf("Digite o pib da cidade A: \n");
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

printf("Digite a área da cidade B: \n");
scanf(" %f", &area2);

printf("Digite o pib da cidade B: \n");
scanf(" %f", &pib2);

printf("Digite o número de pontos turísticos da cidade B: \n");
scanf("%d", &pt2);

printf("\nCidade A:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", estado1, cod1, nome1, pop1, area1, pib1, pt1);
printf("\nCidade B:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", estado2, cod2, nome2, pop2, area2, pib2, pt2);

return 0;

}
