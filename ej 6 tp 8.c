#include <stdio.h>
#include <stdlib.h>




int main()
{
	int matriz[10][2],num ,edad,fila=0,columna=0;
	int conta,conta2,contador=0;
	
	
	printf("Ingrese Num de socio: ");
	scanf("%d",&num);
	
	
	while(num!=0 && contador<10){
		
		printf("Ingrese edad : ");
		scanf("%d", &edad);
		
		matriz[contador][0]=num;
		matriz[contador][1]=edad;
		contador++;
		
		printf(" Num de socio: ");
			scanf("%d",& num);
	}
	
	for(fila=0 ;fila <contador-1 ; fila++) {
		
		for(columna=fila+1 ; columna<contador; columna++) {
			
			if (matriz[fila][1] <matriz[columna][1]) {
				
				conta =  matriz[fila][0];
				
				conta2 = matriz[fila][1];
				
				matriz[fila][0] = matriz[columna][0];
				
				matriz[columna][0] = conta;
				
				matriz[columna][1] = conta2;
			}
		}
	}
			printf("Ordenacion por edad :\n");
	
	
	for (fila=0;fila<contador;fila++) {
		
		printf("Edad: %d  socio: %d\n", matriz[fila][1],matriz[fila][0]);

	}
	
	system("pause");
	return 0;
}
