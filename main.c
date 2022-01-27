//CÁCULO DA TABUADA

//JOSÉ DE RIBAMAR SIQUEIRA BASTOS


#include <stdio.h>
#include <stdlib.h>


int numero, resp;
int contador = 0;

int main()
{

do
{

    printf("Tabuada\n\n");
    printf("Digite o numero da tabuada:  ");
    scanf("%d", &numero);

    for(contador=0; contador<=10; contador++)
    {
        printf("%d x %d = %d\n", numero, contador, numero*contador);
    }

    printf("\n1 - Novo calculo\n");
    printf("2 - Sair\n");
    printf("Digite a opcao desejada:  ");
    scanf("%d", &resp);


}  while(resp != 2);

      system("pause");
      return 0;
}
