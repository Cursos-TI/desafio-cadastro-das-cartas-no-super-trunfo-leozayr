#include <stdio.h>

int main() 
{

    //DP = densidade populacional: p / area
    //PPC = PIB per Capita: PIB / p
    
    char sta1[50];
    char C1[50], C2[50];
    int p1, p2;
    int t1, t2;
    float pib1, pib2;
    float area1, area2;
    float dp1, dp2;
    float ppc1, ppc2;


    
    printf ("Qual o nome do Estado?\n");
    scanf ("%s", &sta1);

    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C1);
    printf ("------------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p1);
    printf ("Área(km²):\n");
    scanf ("%f", &area1);
    printf ("PIB:\n");
    scanf ("%f", &pib1);
    printf ("Pontos turisticos:\n");
    scanf ("%d", &t1);
    dp1 = (float) p1 / area1;
    ppc1 = (float) pib1 / p1;

    printf ("------------------------------------\n");

    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C2);
    printf ("------------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p2);
    printf ("Área(km²):\n");
    scanf ("%f", &area2);
    printf ("PIB:\n");
    scanf ("%f", &pib2);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t2);
    dp2 = (float) p2 / area2;
    ppc2 = (float) pib2 / p2;

    printf ("------------------------------------\n");
    printf ("-----------------%s-----------------\n", sta1);
    printf ("------------------------------------\n");

    if (p1 > p2)
    {
        printf ("População: %s Venceu!\n", C1);
    }
    else
    {
        printf ("População: %s Venceu!\n", C2);
    }

    printf ("------------------------------------\n");

    if (area1 > area2)
    {
        printf ("Área: %s Venceu!\n", C1);
    }
    else
    {
        printf ("Área: %s Venceu!\n", C2);
    }

    printf ("------------------------------------\n");

    if (pib1 > pib2)
    {
        printf ("PIB: %s Venceu!\n", C1);
    }
    else
    {
        printf ("PIB: %s Venceu!\n", C2);
    }

    printf ("------------------------------------\n");

    if (t1 > t2)
    {
        printf ("Pontos turísticos: %s Venceu!\n", C1);
    }
    else
    {
        printf ("Pontos turísticos: %s Venceu!\n", C2);
    }

    printf ("------------------------------------\n");

    if (dp1 < dp2)
    {
        printf ("Densidade Populacional: %s Venceu!\n", C1);
    }
    else
    {
        printf ("Densidade Populacional: %s Venceu!\n", C2);
    }

    printf ("------------------------------------\n");

    if (ppc1 > ppc2)
    {
        printf ("PIB per Capita: %s Venceu!\n", C1);
    }
    else
    {
        printf ("PIB per Capita: %s Venceu!\n", C2);
    }

    printf ("------------------------------------\n");

}