#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, ano;


    do{
    printf("Insira o número correspondente ao mês:\n");
    scanf("%d", &mes);

    switch(mes){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("o mês tem 31 dias.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("o mês tem 30 dias.\n");
            break;
        case 2:
            printf("Insira o ano:\n");
            scanf("%d", &ano);
            if(ano%4 == 0)
                printf("O mês tem 29 dias.\n");
            else
                printf("O mês tem 28 dias.\n");
            break;
        default:
            printf("Número inválido.");
            return 0;
    }
    }while(mes<=12 && mes>=1);

    return 0;
}
