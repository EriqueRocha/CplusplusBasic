#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
 float imposto, produto, total;
  printf("informe o valor do produto\n");
  scanf("%f",&produto);
 imposto = produto*0.06;
 total=produto+imposto;
 if(produto < 100){
 	printf("insento de imposto\n");
 }else{
 	printf("valor do imposto sobre o produto: %3.f\n",imposto);
 	printf("total a ser pago %3.f\n",total);
 }
}