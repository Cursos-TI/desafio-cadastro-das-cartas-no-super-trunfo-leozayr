#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{
    
    char sta1[50];
    char C1[50], C2[50];
    int p1, p2;
    int t1, t2;
    float pib1, pib2;
    float area1, area2;
    float dp1, dp2;
    float ppc1, ppc2;
    int escolha;

    
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

    printf ("Agora que suas cartas estão cadastradas, selecione qual atributo você deseja comparar!!!\n");
    printf ("[1] Para População.\n");
    printf ("[2] Para Área.\n");
    printf ("[3] Para PIB.\n");
    printf ("[4] Para Pontos Turísticos.\n");
    printf ("[5] Para Densidade Populacional.\n");
    printf ("[6] Para PIB per Capita.\n");
    scanf ("%d", &escolha);

    printf ("------------------------------------\n");
    printf ("               %s\n", sta1);
    printf ("------------------------------------\n");

    switch (escolha)
    {
        case 1:

            if (p1 == p2)
            {
                printf ("%s e %s empataram!\n", C1, C2);
            }
            else if (p1 > p2)
            {
                printf ("%s Venceu!\n", C1);
                printf ("População: %d\n", p1);
            }
            else
            {
                printf ("%s Venceu!\n", C2);
                printf ("População: %d\n", p2);
            }

            break;

        case 2:

            if (area1 == area2)
            {
                printf ("%s e %s empataram!\n", C1, C2);
            }
            else if (area1 > area2)
            {
                printf ("%s Venceu!\n", C1);
                printf ("Área: %.2f\n", area1);
            }
            else
            {
                printf ("%s Venceu!\n", C2);
                printf ("Área: %.2f\n", area2);
            }
                break;
        
        case 3:

            if (pib1 == pib2)
            {
                printf ("%s e %s empataram!\n", C1, C2);
            }
            else if (pib1 > pib2)
            {
                printf ("%s Venceu!\n", C1);
                printf ("PIB: %.2f\n", pib1);
            }
            else
            {
                printf ("%s Venceu!\n", C2);
                printf ("PIB: %.2f\n", pib2);
            }

            break;
         
        case 4:
        
            if (t1 == t2)
            {
                printf ("%s e %s empataram!\n", C1, C2);
            }
            else if (t1 > t2)
            {
                printf ("%s Venceu!\n", C1);
                printf ("Pontos Turísticos: %d\n", t1);
            }
            else
            {
                printf ("%s Venceu!\n", C2);
                printf ("Pontos Turísticos: %d\n", t2);
            }

            break;

        case 5:

            if (pib1 == pib2)
            {
                printf ("%s e %s empataram!\n", C1, C2);
            }
            else if (dp1 < dp2)
            {
                printf ("%s Venceu!\n", C1);
                printf ("Densidade Populacional: %.2f\n", dp1);
            }
            else
            {
                printf ("%s Venceu!\n", C2);
                printf ("Densidade Populacional: %.2f\n", dp2);
            }

            break;

        case 6:

            if (ppc1 == ppc2)
            {
                printf ("%s e %s empataram!\n", C1, C2);
            }
            else if (ppc1 > ppc2)
            {
                printf ("%s Venceu!\n", C1);
                printf ("PIB per Capita: %.2f\n", ppc1);
            }
            else
            {
                printf ("%s Venceu!\n", C2);
                printf ("PIB per Capita24487: %.2f\n", ppc2);
            }

            break;
        
        default:

            printf ("Escolha uma opção válida.\n");

    }

    printf ("------------------------------------\n");

}