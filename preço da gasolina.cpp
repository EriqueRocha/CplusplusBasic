#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
float valPago, valComb, valAbastecido;
printf("entre com o valor apago\n");
scanf("%f",&valPago);
printf("entre com o valor do combustivel\n");
scanf("%f",&valComb);
valAbastecido = valPago/valComb;
printf("vc abastecera: %.2f Litros", valAbastecido);

}