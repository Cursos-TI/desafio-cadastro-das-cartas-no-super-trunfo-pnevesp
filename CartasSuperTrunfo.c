#include <stdio.h>

int main(){
    int npt = 50;
    float populacao = 2703.000;
    float pib = 73000000.000;
    float area = 313.008;
    char estado[20] = "Ceará"; 
    char codigo[20] = "A01";
    char cidade[30] = "Fortaleza";
    float densidade = populacao / area;
    float pib_per_capita = pib / populacao;
    float superpoder = 1 / densidade + npt + populacao + pib + area + pib_per_capita;


    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.0f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", densidade, "hab/km²");
    printf("PIB Per Capita: %.2f\n", pib_per_capita, "reais");
    printf("Super Poder: %2.f\n", superpoder);


    int NPT = 20;
    float Area = 435.002;
    float Pib = 98000000.000;
    float Populacao = 1773.000;
    char Estado[20] = "Paraná";
    char Codigo[10] = "B02";
    char Cidade[30] = "Curitiba";
    float Densidade = Populacao / Area;
    float PIBCAPITA = Pib / Populacao;
    float SuperPoder = 1 / Densidade + NPT + Populacao + Pib + Area + PIBCAPITA;

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %.0f\n", Populacao);
    printf("Área: %.3f\n", Area);
    printf("PIB: %.0f\n", Pib);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade populacional: %.2f\n", Densidade, "hab/km²");
    printf("PIB Per Capita: %.2f\n", PIBCAPITA, "reais");
    printf("Super Poder: %2.f\n", SuperPoder);


    printf("Comparação de Cartas \n");
    printf("População: Carta 1 venceu (%d)\n", populacao > Populacao);
    printf("Área: Carta 2 venceu (%d)\n", area > Area);
    printf("PIB: Carta 2 venceu (%d)\n", pib > Pib);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", npt > NPT);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade < Densidade);
    printf("PIB Per Capita: Carta 2 venceu (%d)\n", pib_per_capita > PIBCAPITA);
    printf("Super Poder: Carta 2 venceu (%d)\n", superpoder > SuperPoder);

    return 0;

}
