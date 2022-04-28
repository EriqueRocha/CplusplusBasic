#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
  int valor, resto;
  printf("informe o numero\n");
  scanf("%d",&valor);
  resto=valor%2;
	if(resto == 1){
		printf("numero: %d\n",valor);
		printf("o numero informado e impar\n");
	}
	else{
		printf("numero: %d\n",valor);
	    printf("o numero nformado e par\n");
    }

}

	


