#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {

float km, litro;
printf("entre com a quantidade de km percorrida \n");
scanf( "%f", &km);
printf("entre com a quantidade de litro usada\n");
scanf( "%f", &litro );
float consumoMedio = km/litro;
printf("o consumo medio do veiculo e: %.2fkm/L",  consumoMedio);

}
