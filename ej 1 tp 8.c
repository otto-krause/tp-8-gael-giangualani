#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[6][5] = {0};
	int fila_actual, columna_actual, valor, fila, columna;
	
	printf("Ingrese el número de fila del 1 al 6, o 0 salir : ");
	scanf("%d", &fila);
	
	while (fila != 0) {
		printf("Ingrese el número de columna (1-5): ");
		scanf("%d", &columna);
		
		if (fila >= 1 && fila <= 6 && columna >= 1 && columna <= 5) {
			
			printf("Ingrese el valor a ingresar en la posición (%d, %d): ", fila, columna);
			scanf("%d", &valor);
			matriz[fila - 1][columna - 1] = valor;
		} else {
			
			printf("Fila o columna fuera de rango. Intente de nuevo.\n");
		}
		
		
		printf("Ingrese el número de fila (1-6), o 0 para finalizar: ");
		scanf("%d", &fila);
	}
	
	printf("Matriz por filas:\n");
	
	for (fila_actual = 0; fila_actual < 6; fila_actual++) {
		
		for (columna_actual = 0; columna_actual < 5; columna_actual++) {
			printf("%d ", matriz[fila_actual][columna_actual]);
		}
		
		printf("\n");
	}
	
	printf("Matriz por columnas:\n");
	
	
	for (columna_actual = 0; columna_actual < 5; columna_actual++) {
		
		for (fila_actual = 0; fila_actual < 6; fila_actual++) {
			
			printf("%d ", matriz[fila_actual][columna_actual]);
		}
		printf("\n");
	}
	system("pause");
	
	return 0;
}
