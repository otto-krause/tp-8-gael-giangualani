#include <stdio.h>
#include <stdlib.h>

int main() {
	int cliente = 0, tipoTransaccion, monto, num;
	int registros[100][6] = {0}, mayorDeposito = 0;
	
	printf("Ingrese número de cliente: ");
	scanf("%d", &num);
	
	while (num != 0) {
		printf("1 (Depósito) 2 (Extracción) 3 (Comisiones deducidas) 4 (Intereses acreditados):\n");
		scanf("%d", &tipoTransaccion);
		
		printf("Ingrese Monto: ");
		scanf("%d", &monto);
		
		if (tipoTransaccion == 1) {
			registros[num - 1][1] += monto;
			registros[num - 1][5] += monto;
		} else if (tipoTransaccion == 2) {
			registros[num - 1][2] += monto;
			registros[num - 1][5] -= monto;
		} else if (tipoTransaccion == 3) {
			registros[num - 1][3] += monto;
			registros[num - 1][5] -= monto;
		} else if (tipoTransaccion == 4) {
			registros[num - 1][4] += monto;
			registros[num - 1][5] += monto;
		}
		
		printf("Ingrese número de cliente: ");
		scanf("%d", &num);
	}
	
	for (cliente = 0; cliente < 100; cliente++) {
		registros[cliente][0] = cliente + 1;
	}
	
	printf("Nro Cliente  Depos    Extracc  Comisiones deduc  Intereses acreditados Saldo\n");
	
	for (cliente = 0; cliente < 100; cliente++) {
		for (int j = 0; j < 6; j++) {
			printf("%d \t\t", registros[cliente][j]);
			
			if (mayorDeposito < registros[cliente][1]) {
				mayorDeposito = registros[cliente][1];
			}
		}
		printf("\n");
	}
	
	printf("Mayor depósito: \n");
	
	for (cliente = 0; cliente < 100; cliente++) {
		if (registros[cliente][1] == mayorDeposito) {
			printf("Número %d - Depósito %d \n", registros[cliente][0], registros[cliente][1]);
		}
	}
	
	system("pause");
	return 0;
}
