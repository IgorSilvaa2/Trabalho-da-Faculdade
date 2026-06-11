#include <stdio.h>

int main() {
    float compra,desconto;
    printf("Digite o valor da compra !\n");
    scanf("%f", &compra);
    
    if (compra < 50){
        printf("Sem desconto, Valor a pagar %.2f", compra);
    }
    else if (compra >= 50 && compra <= 100 ){
        desconto = compra * 0.10;
        compra = compra - desconto;
        printf("Desconto de 10% : Valor a pagar €%.2f", compra);
    }
    else if(compra >100 && compra <= 200){
        desconto = compra * 0.15;
        compra = compra - desconto;
        printf("Desconto de 15% : Valor a pagar €%.2f", compra);
    }
    else (compra >200);{
        desconto = compra * 0.20;
        compra = compra - desconto;
        printf("Desconto de 20% : Valor a pagar €%.2f", compra);
    }

    return 0;
}
