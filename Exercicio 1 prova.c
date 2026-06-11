#include <stdio.h>

int main (){
    float gasoleo = 1.65, gasolina95 = 1.80, gasolina98 = 1.95, litros;
    int opcao;
    
    printf("Introduza o tipo de combustivel !\n 1 - Gasoleo \n 2 - Gasolina 95 \n 3 - Gasolina 98 \n");
    scanf("%d", &opcao);
    
    while(opcao <1 || opcao >3){
        printf("Opcao invalida digite novamente\n");
        scanf("%d", &opcao);
    }
    
    if(opcao == 1){
        printf("Gasoleo selecionado digite a quantidade de litros !\n");
        scanf("%f", &litros);
        litros = gasoleo * litros;
        printf("Valor a pagar ! %f", litros);
    }
    else if(opcao == 2){
        printf("Gasolina 95 selecionado digite a quantidade de litros !\n");
        scanf("%f", &litros);
        litros = gasolina95 * litros;
        printf("Valor a pagar ! %f", litros);
    }
    else if (opcao == 3){
        printf("Gasolina 98 selecionado digite a quantidade de litros !\n");
        scanf("%f", &litros);
        litros = gasolina98 * litros;
        printf("Valor a pagar ! %f", litros);
    }
    
    
    return 0;
}
