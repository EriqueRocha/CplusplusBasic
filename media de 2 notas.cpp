#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	
	float notaX, notaY, media;
	
	printf("informe a sua nota da AV1\n");
	scanf("%f",&notaX);
	
	printf("informe a sua nota da AV2\n");
	scanf("%f",&notaY);
	
	media = (notaX+notaY)/2; 
	
	if(media > 5.9)
	
	printf("aprovado\n");

	else
   	printf("reprovado\n");

}