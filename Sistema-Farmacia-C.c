#include <stdio.h>
#include <stdlib.h>

struct tProduto
{

    int codigo;
    char descricao[50];
    float valor;

};


int main()
{
    int opcao,codigo=0,qtdProdutos=0,achei=0;

    struct tProduto produtos[50];

    while( opcao !=0)
    {
        opcao = menu();

        switch(opcao)
        {
        case 1:
            printf("\n***Inclusao***\n");
            printf("\n\n\n");
            if ( qtdProdutos < produtos)
            {
                printf("Digite o codigo...:\n");
                scanf("%d",&produtos[qtdProdutos].codigo);
                printf("\n");

                printf("Digite a descricao...:\n");
                fflush(stdin);
                gets(produtos[qtdProdutos].descricao);
                printf("\n");

                printf("Digite o valor...:\n");
                scanf("%f",&produtos[qtdProdutos].valor);
                qtdProdutos++;

            }

            else
                printf("Vetores cheios!\n");
            break;

        case 2:
            printf("\n***Consultar***\n");
            printf("\n\n\n");

            printf("Digite o codigo...:\n");
            scanf("%d",&codigo);
            printf("\n");

            for ( int i =0; i < qtdProdutos; i++)

                if ( codigo == produtos[i].codigo)
                {
                    printf("Descricao Do Produto = %s\n",produtos[i].descricao);
                    printf("Valor Do Produto = R$%.2f\n",produtos[i].valor);

                    achei = 1;
                }

            if(!achei)
                printf("Codigo nao encontrado\n");



            break;

        case 3:
            printf("\n***Listagem***\n");
            printf("\n\n\n");
            for ( int i =0; i < qtdProdutos; i++)
            {
                printf("Codigo Do Produto = %d\n",produtos[i].codigo);
                printf("Descricao Do Produto = %s\n",produtos[i].descricao);
                printf("Valor Do Produto = R$%.2f\n",produtos[i].valor);
                 printf("\n");

            }
            break;

        case 4:
            printf("\n***Alteracao***\n");
            printf("\n\n\n");

            printf("Digite o codigo...:\n");
            scanf("%d",&codigo);
            printf("\n");

            for ( int i =0; i < qtdProdutos; i++)

                if ( codigo == produtos[i].codigo)
                {
                    printf("Descricao Do Produto = %s\n",produtos[i].descricao);
                    printf("Valor Do Produto = R$%.2f\n",produtos[i].valor);
                    achei = 1;
                    printf("Digite a descricao...:\n");
                    fflush(stdin);
                    gets(produtos[i].descricao);
                    printf("\n");
                    printf("Digite o valor...:\n");
                    scanf("%f",&produtos[i].valor);


                }

            if(!achei)
                printf("Codigo nao encontrado\n");




            break;

        case 5:
            printf("\n***Exclusao***\n");
            printf("\n\n\n");



            printf("Digite o codigo...:\n");
            scanf("%d",&codigo);
            printf("\n");

            for ( int i =0; i < qtdProdutos; i++)

                if ( codigo == produtos[i].codigo)
                {
                    printf("Descricao Do Produto = %s\n",produtos[i].descricao);
                    printf("Valor Do Produto = R$%.2f\n",produtos[i].valor);
                    printf("Produto Excluido\n");
                    achei = 1;
                    produtos[i] = produtos[qtdProdutos-1];
                    qtdProdutos--;
                }

            if(!achei)
                printf("Codigo nao encontrado\n");

            break;

        }
    }

    return 0;
}


int menu(void)
{
    int op;
    printf("\n");
    printf("1.Incluir\n");
    printf("2.Consultar\n");
    printf("3.Listagem\n");
    printf("4.Alteracao\n");
    printf("5.Exclusao\n");
    printf("0.Sair\n");
    printf("Qual opcao voce deseja:\n");
    scanf("%d",&op);
    return op;



}





