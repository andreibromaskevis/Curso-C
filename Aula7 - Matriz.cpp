//Crie uma matriz 3x3 que primeiro escaneia os números depois imprime a matriz

#include <stdio.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL,"Portuguese");
	
int matriz[3][3];
int x, y;

printf("Digite os números de uma matriz (3x3):\n\n");

for (x = 0; x < 3; x++){
	
	for (y = 0; y < 3; y++){
		
		printf("Matriz[%i][%i] --> ", x, y);
		scanf("%i", &matriz[x][y]);	
	}
}

for (x = 0; x < 3; x++){
	
	for (y = 0; y < 3; y++){
		
		printf("(%i)\t", matriz[x][y]);
	}
	printf("\n");
}
}




