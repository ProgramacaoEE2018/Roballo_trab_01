#include<stdio.h>
#include<stdlib.h>
/*Programa do 1 Tenente Roballo SE-3 */
int main(void)

{
    float notasVE=0.0; // Zerando todas as vari�veis
    float somaVE=0.0;
    int i=0;
    float mediaVE=0.0;
    float notaVC=0.0;
    float notaminimaVF=0.0;
    int qtdnotasVE=0;
    printf(">>Este programa calcula a nota de VF m�nima para passar na cadeira<<\n\n\n");

    printf("\nQuantas notas de VE voce deseja inserir?\n");
    fflush(stdin); //limpando o buffer do teclado
    scanf("%d",&qtdnotasVE);
    while(qtdnotasVE<=0) //caso a qtd de notas de VE for menor ou igual a zero
    {
        printf("\nNumero invalido\n");
        printf("\nQuantas notas de VE voce deseja inserir?\n");
        scanf("%d",&qtdnotasVE);
    }

    for(i=0; i<qtdnotasVE; i++) //la�o para inserir as notas de VE
    {
        printf("\ndigite a %d nota de VE:\n",i+1);
        scanf("%f",&notasVE);
        while(notasVE<0.0 || notasVE>10.0) //impede que o usu�rio insira notas inv�lidas
        {
            printf("\nNumero invalido\n");
            printf("\ndigite a %d nota de VE:\n",i+1);
            scanf("%f",&notasVE);
        }
        somaVE=somaVE+notasVE; //obtem a soma de todas VEs
    }

    mediaVE=somaVE/qtdnotasVE; //f�rmula da m�dia de VE

    printf("digite a nota de VC:\n");
    scanf("%f",&notaVC);
    while(notaVC<0.0 || notaVC>10.0) //impede notas de VC inv�lidas
    {
        printf("\nNumero invalido\n");
        printf("\ndigite a %d nota de VC:\n",i+1);
        scanf("%f",&notaVC);
    }
    fflush(stdin); //limpar buffer do teclado

    notaminimaVF=(20.0-mediaVE-notaVC)/2.0; //f�rmula para obter a nota m�nima de VF
    if(notaminimaVF<4) //se tirar nota menor que 4, fica de rec de qualquer jeito.
        notaminimaVF=4.0;
    printf("\nA nota minima que voce deve tirar na VF deve ser: %.2f\n", notaminimaVF);
    return 0;
}
