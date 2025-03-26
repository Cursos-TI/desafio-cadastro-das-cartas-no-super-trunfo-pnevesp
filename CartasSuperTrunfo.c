#include <stdio.h>

int main(){
    int npt = 50;
    float populacao = 11895578;
    float pib = 73.0;
    float area = 312.441;
    char estado[20] = "Ceará"; 
    char codigo[20] = "A01";
    char cidade[30] = "Fortaleza";

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.12f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);

    int NPT = 20;
    float Area = 432;
    float Pib = 98.0;
    float Populacao = 1.774;
    char Estado[20] = "Paraná";
    char Codigo[10] = "B02";
    char Cidade[30] = "Curitiba";

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %.0f\n", Populacao);
    printf("Área: %.3f\n", Area);
    printf("PIB: %.12f\n", Pib);
    printf("Número de Pontos Turísticos: %d\n", NPT);



    return 0;

}