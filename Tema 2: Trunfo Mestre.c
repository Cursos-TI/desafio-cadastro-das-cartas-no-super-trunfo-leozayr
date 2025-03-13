#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{

    char pais1 [50], computador [50];
    int p1, p2;
    int t1, t2;
    int pib1, pib2;
    int area1, area2;
    float dp1, dp2;
    int ppc1, ppc2;
    int escolha1, escolha2, result1, result2;

    // p = População.
    // t = Pontos turísticos.
    // dp = Densidade Populacional.
    // ppc = PIB per Capita.
    

    srand (time(0));

        p2 = rand () % 100 + 1;
        area2 = rand () % 100 + 1;
        pib2 = rand () % 100 + 1;
        t2 = rand () % 30 + 1;

    dp2 = (float) p2 / area2;
    ppc2 = (float) pib2 / p2;

    printf ("BEM VINDO!!!");
    printf ("Você está jogando super TRUNFO contra o COMPUTADOR, para iniciar o jogo, dê o nome do PAÍS do COMPUTADOR!!!\n");
    printf ("Nome do país do Computador: ");
    scanf ("%s", &computador);

    printf ("\n");
    printf ("----------------------------------------------------------\n");

    printf ("Agora defina o nome do seu PAÍS!!\n");
    printf ("\n");

    printf ("Qual o nome do seu País?\n");
    scanf ("%s", &pais1);
    printf ("------------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p1);
    printf ("Área(km²):\n");
    scanf ("%d", &area1);
    printf ("PIB:\n");
    scanf ("%d", &pib1);
    printf ("Pontos turisticos:\n");
    scanf ("%d", &t1);
    dp1 = (float) p1 / area1;
    ppc1 = (float) pib1 / p1;



    printf ("Agora que você determinou seus atributos de carta selecione dois atributos para cobater seu adiversário!!\n");
    printf ("\n");
    printf ("----------------------------------------------------------\n");
    printf ("[1] - Para selecionar População.\n");
    printf ("[2] - Para selecionar Área(km²).\n");
    printf ("[3] - Para selecionar PIB.\n");
    printf ("[4] - Para selecionar Pontos Turísticos.\n");
    printf ("[5] - Para selecionar Densidade Populacional.\n");
    printf ("[6] - Para selecionar PIB per Capita.\n");
    printf ("----------------------------------------------------------\n");
    printf ("\n");
    printf ("Selecione uma das Opções: ");
    scanf ("%d", &escolha1);


    switch (escolha1)
    {
        case 1:

            printf ("Você selecionou Populçao para combater seu adversário!\n");
            

            break;

        case 2:

            printf ("Você selepibou Área(km²) para combater seu adversário!\n");
            

            break;

        case 3:

            printf ("Você selecionou PIB para combater seu adversário!\n");
            

            break;

        case 4:

            printf ("Você selecionou Pontos Turísticos para combater seu adversário!\n");
            

            break;

        case 5:

            printf ("Você selecionou Densidade Populacional para combater seu adversário!\n");
            

            break;

        case 6:

            printf ("Você selecionou PIB per Capita para combater seu adversário!\n");
            

            break;

        default:

            printf ("Selecione uma opção válida...");

            break;

    }

    printf ("\n");
    printf ("----------------------------------------------------------\n");


    if (escolha1 == 1)
        {
            printf ("%s - Pontuação: %d\n", pais1, p1);
            printf ("%s - Pontuação: %d\n", computador, p2);

            result1 = p1 > p2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha1 == 2)
        {
            printf ("%s - Pontuação: %d\n", pais1, area1);
            printf ("%s - Pontuação : %d\n", computador, area2);
            
            result1 = area1 > area2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha1 == 3)
        {
            printf ("%s - Pontuação: %d\n", pais1, pib1);
            printf ("%s - Pontuação: %d\n", computador, pib2);
            
            result1 = pib1 > pib2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha1 == 4)
        {
            printf ("%s - Pontuação: %d\n", pais1, t1);
            printf ("%s - Pontuação: %d\n", computador, t2);
            
            result1 = t1 > t2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha1 == 5)
        {
            printf ("%s - Pontuação: %.2f\n", pais1, dp1);
            printf ("%s - Pontuação: %.2f\n", computador, dp2);
            
            result1 = dp1 < dp2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha1 == 6)
        {
            printf ("%s - Pontuação: %d\n", pais1, ppc1);
            printf ("%s - Pontuação: %d\n", computador, ppc2);
            printf ("\n");
            result1 = ppc1 > ppc2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }

        printf ("----------------------------------------------------------\n");
        printf ("\n");

    if (escolha2 == escolha1)
    {
        printf ("Você não pode escolher 2 vezes o mesmo atributo. Tente novamente.");
    }
    else
    {
        printf ("Agora selecione o segundo atributo para combater seu adversário!\n");
        printf ("\n");
        printf ("----------------------------------------------------------\n");
        printf ("!!! SELECIONAR O MESMO ATRIBUTO 2 VEZES É PROÍBIDO !!!\n");
        printf ("----------------------------------------------------------\n");
        printf ("[1] - Para selecionar População.\n");
        printf ("[2] - Para selecionar Área(km²).\n");
        printf ("[3] - Para selecionar PIB.\n");
        printf ("[4] - Para selecionar Pontos Turísticos.\n");
        printf ("[5] - Para selecionar Densidade Populacional.\n");
        printf ("[6] - Para selecionar PIB per Capita.\n");
        printf ("----------------------------------------------------------\n");
        printf ("Selecione uma das Opções: ");
        scanf ("%d", &escolha2);

        printf ("\n");

        switch (escolha2)
        {
            case 1:

            printf ("Você selecionou Populçao para combater seu adversário!\n");
            

            break;

        case 2:

            printf ("Você selepibou Área(km²) para combater seu adversário!\n");
            

            break;

        case 3:

            printf ("Você selecionou PIB para combater seu adversário!\n");
            

            break;

        case 4:

            printf ("Você selecionou Pontos Turísticos para combater seu adversário!\n");
            

            break;

        case 5:

            printf ("Você selecionou Densidade Populacional para combater seu adversário!\n");
            

            break;

        case 6:

            printf ("Você selecionou PIB per Capita para combater seu adversário!\n");
            

            break;

        default:

            printf ("Selecione uma opção válida...");

            break;

        }
    }
    
    printf ("\n");
    printf ("----------------------------------------------------------\n");

    if (escolha2 == 1)
        {
            printf ("%s - Pontuação: %d\n", pais1, p1);
            printf ("%s - Pontuação: %d\n", computador, p2);
            
            result1 = p1 > p2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha2 == 2)
        {
            printf ("%s - Pontuação: %d\n", pais1, area1);
            printf ("%s - Pontuação : %d\n", computador, area2);
            printf ("\n");
            result1 = area1 > area2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha2 == 3)
        {
            printf ("%s - Pontuação: %d\n", pais1, pib1);
            printf ("%s - Pontuação: %d\n", computador, pib2);
            
            result1 = pib1 > pib2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha2 == 4)
        {
            printf ("%s - Pontuação: %d\n", pais1, t1);
            printf ("%s - Pontuação: %d\n", computador, t2);
            
            result1 = t1 > t2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha2 == 5)
        {
            printf ("%s - Pontuação: %.2f\n", pais1, dp1);
            printf ("%s - Pontuação: %.2f\n", computador, dp2);
            
            result1 = dp1 < dp2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }
        else if (escolha2 == 6)
        {
            printf ("%s - Pontuação: %d\n", pais1, ppc1);
            printf ("%s - Pontuação: %d\n", computador, ppc2);
            
            result1 = ppc1 > ppc2 ? printf ("%s VENCEU essa rodada!!!\n", pais1) : printf ("%s VENCEU essa rodada\n", computador);
        }

        printf ("----------------------------------------------------------\n");

    if ((escolha1 || escolha2 == 1) && (escolha1 || escolha2 == 2))
    {
        result1 = p1 + area1;
        result2 = p2 + area2;
    }
    else if ((escolha1 || escolha2 == 1) && (escolha1 || escolha2 == 3))
    {
        result1 = p1 + pib1;
        result2 = p2 + pib2;
    }
    else if ((escolha1 || escolha2 == 1) && (escolha1 || escolha2 == 4))
    {
        result1 = p1 + t1;
        result2 = p2 + t2;
    }
    else if ((escolha1 || escolha2 == 1) && (escolha1 || escolha2 == 5))
    {
        result1 = p1 + dp1;
        result2 = p2 + dp2;
    }
    else if ((escolha1 || escolha2 == 1) && (escolha1 || escolha2 == 6))
    {
        result1 = p1 + ppc1;
        result2 = p2 + ppc2;
    }

    else if ((escolha1 || escolha2 == 2) && (escolha1 || escolha2 == 1))
    {
        result1 = area1 + p1;
        result2 = area2 + p2;
    }
    else if ((escolha1 || escolha2 == 2) && (escolha1 || escolha2 == 3))
    {
        result1 = area1 + pib1;
        result2 = area2 + pib2;
    }
    else if ((escolha1 || escolha2 == 2) && (escolha1 || escolha2 == 4))
    {
        result1 = area1 + t1;
        result2 = area2 + t2;
    }
    else if ((escolha1 || escolha2 == 2) && (escolha1 || escolha2 == 5))
    {
        result1 = area1 + dp1;
        result2 = area2 + dp2;
    }
    else if ((escolha1 || escolha2 == 2) && (escolha1 || escolha2 == 6))
    {
        result1 = area1 + ppc1;
        result2 = area2 + ppc2;
    }

    else if ((escolha1 || escolha2 == 3) && (escolha1 || escolha2 == 1))
    {
        result1 = pib1 + p1;
        result2 = pib2 + p2;
    }
    else if ((escolha1 || escolha2 == 3) && (escolha1 || escolha2 == 2))
    {
        result1 = pib1 + area1;
        result2 = pib2 + area2;
    }
    else if ((escolha1 || escolha2 == 3) && (escolha1 || escolha2 == 4))
    {
        result1 = pib1 + t1;
        result2 = pib2 + t2;
    }
    else if ((escolha1 || escolha2 == 3) && (escolha1 || escolha2 == 5))
    {
        result1 = pib1 + dp1;
        result2 = pib2 + dp2;
    }
    else if ((escolha1 || escolha2 == 3) && (escolha1 || escolha2 == 6))
    {
        result1 = pib1 + ppc1;
        result2 = pib2 + ppc2;
    }
    
    else if ((escolha1 || escolha2 == 4) && (escolha1 || escolha2 == 1))
    {
        result1 = t1 + p1;
        result2 = t2 + p2;
    }
    else if ((escolha1 || escolha2 == 4) && (escolha1 || escolha2 == 2))
    {
        result1 = t1 + area1;
        result2 = t2 + area2;
    }
    else if ((escolha1 || escolha2 == 4) && (escolha1 || escolha2 == 3))
    {
        result1 = t1 + pib1;
        result2 = t2 + pib2;
    }
    else if ((escolha1 || escolha2 == 4) && (escolha1 || escolha2 == 5))
    {
        result1 = t1 + dp1;
        result2 = t2 + dp2;
    }
    else if ((escolha1 || escolha2 == 4) && (escolha1 || escolha2 == 6))
    {
        result1 = t1 + ppc1;
        result2 = t2 + ppc2;
    }

    else if ((escolha1 || escolha2 == 5) && (escolha1 || escolha2 == 1))
    {
        result1 = dp1 + p1;
        result2 = dp2 + p2;
    }
    else if ((escolha1 || escolha2 == 5) && (escolha1 || escolha2 == 2))
    {
        result1 = dp1 + area1;
        result2 = dp2 + area2;
    }
    else if ((escolha1 || escolha2 == 5) && (escolha1 || escolha2 == 3))
    {
        result1 = dp1 + pib1;
        result2 = dp2 + pib2;
    }
    else if ((escolha1 || escolha2 == 5) && (escolha1 || escolha2 == 4))
    {
        result1 = dp1 + t1;
        result2 = dp2 + t2;
    }
    else if ((escolha1 || escolha2 == 5) && (escolha1 || escolha2 == 6))
    {
        result1 = dp1 + ppc1;
        result2 = dp2 + ppc2;
    }

    else if ((escolha1 || escolha2 == 6) && (escolha1 || escolha2 == 1))
    {
        result1 = ppc1 + p1;
        result2 = ppc2 + p2;
    }
    else if ((escolha1 || escolha2 == 6) && (escolha1 || escolha2 == 2))
    {
        result1 = ppc1 + area1;
        result2 = ppc2 + area2;
    }
    else if ((escolha1 || escolha2 == 6) && (escolha1 || escolha2 == 3))
    {
        result1 = ppc1 + pib1;
        result2 = ppc2 + pib2;
    }
    else if ((escolha1 || escolha2 == 6) && (escolha1 || escolha2 == 4))
    {
        result1 = ppc1 + t1;
        result2 = ppc2 + t2;
    }
    else if ((escolha1 || escolha2 == 6) && (escolha1 || escolha2 == 5))
    {
        result1 = ppc1 + dp1;
        result2 = ppc2 + dp2;
    }
    else
    {
        printf ("Seleção inválida.");
    }

    if (result1 > result2)
    {   
        printf ("\n");
        printf ("----------------------------------------------------------\n");
        printf ("Parabéns! Você VENCEU!!\n");
        printf ("%s - Pontuação TOTAL: %d\n", pais1, result1);
        printf ("%s - Pontuação TOTAL: %d\n", computador, result2);
        printf ("----------------------------------------------------------\n");
    }
    else if (result1 == result2)
    {
        printf ("\n");
        printf ("----------------------------------------------------------\n");
        printf ("EMPATE!!\n");
        printf ("%s - Pontuação TOTAL: %d\n", pais1, result1);
        printf ("%s - Pontuação TOTAL: %d\n", computador, result2);
        printf ("----------------------------------------------------------\n");
    }
    else
    {
        printf ("\n");
        printf ("----------------------------------------------------------\n");
        printf ("Infelizmente você PERDEU!!\n");
        printf ("%s - Pontuação TOTAL: %d\n", pais1, result1);
        printf ("%s - Pontuação TOTAL: %d\n", computador, result2);
        printf ("----------------------------------------------------------\n");
    }

    return 0;
}