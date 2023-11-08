#include <stdio.h>
#include <stdlib.h>


int main() {
	int matriz[5][5],i,j ;
	
	for ( i=0; i<5; i++) {
		for (j=0; j<5;j++) {
			if (i == j) {
				
				printf("Diagonal prin - Fila %d, Columna %d: ", i+1,j+1);
					scanf("%d", &matriz [i][j]);
			} 
			else if (i < j) {
				printf("Triangulo sup - Fila %d, Columna %d: ", i+1,j+1);
					scanf("%d", &matriz[i][j]);
				
			}
			else {
				printf("Triangulo inf - Fila %d, Columna %d: ", i+1,j+1);
					scanf("%d", &matriz[i][j]);
				
			}
		}
	}
	
	printf(" matriz :\n");
	
	for (i=0;i<5;i++) {
		for (j=0;j<5;j++) {
			printf("%d ", matriz[i][j]);
		}
		
		printf("\n");
	}
	system("Pause");
	return 0;
}
