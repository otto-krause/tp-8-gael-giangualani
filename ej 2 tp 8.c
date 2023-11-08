#include <stdio.h>
#include <stdlib.h>


int main() {
	int matriz[3][3],i,j;
	
	

	printf(" columnas pares:\n");
	
	for (j =0;j<3;j+= 2) {
		for ( i=0;i<3;i++) {
			printf("Fila %d, Columna %d: ",i+1 ,j+1);
				scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("columnas impares:\n");
	for ( j =1;j<3; j+= 2) {
		for (i = 0; i < 3; i++) {
			printf("Fila %d, Columna %d: ", i+1,j+1);
				scanf("%d", &matriz[i][j]);
				
		}
		
	}
	
		printf("Matriz:\n");
			for (i=0; i<3;i++) {
		for ( j =0; j<3;j++) {
			printf("%d ", matriz[i][j]);
		}
		
		printf("\n");
	}
			
	system("pause");
	return 0;
}
