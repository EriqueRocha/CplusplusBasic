#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
float valorDoProduto, precoVista, cartao, parcela;
	
printf("informe o valor do produto\n");

scanf("%f",&valorDoProduto);

precoVista = valorDoProduto - (valorDoProduto*0.15);
cartao = valorDoProduto - (valorDoProduto*0.05);
parcela = valorDoProduto / 6;


printf("\n");
printf("\n");
printf("========|| PRECO INFORMADO DO PRODUTO: %3.f ||========\n",valorDoProduto);
printf("\n");

if(valorDoProduto > 1000){
 printf("                FRETE GRATIS              \n");
}else{
 printf("               PAGUE O FRETE              \n");
}

printf("\n");
printf("======================================================\n");
printf("||  o preco a vista e:             || %.2f R$       ||\n", precoVista);
printf("||---------------------------------||----------------||\n");
printf("||  o preco de 1X no cartao e:     || %.2f R$       ||\n", cartao);
printf("||---------------------------------||----------------||\n");
printf("||  o preco parcelado em 6X e:     || %.2f R$       ||\n", parcela);
printf("=======================================================");
printf("\n");
printf("\n");



}