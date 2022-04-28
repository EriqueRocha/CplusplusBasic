#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
float dividendo, divisor;
printf("entre com dois numeros reais:\n");
scanf("%f %f", &dividendo, &divisor);
printf("A divisão de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);
}