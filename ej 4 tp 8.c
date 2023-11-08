#include <stdio.h>
#include <stdlib.h>

int main() {
	int ma[3][3],i,j,kit,kano,orden ;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			printf("Ingrese valores enteros para  : fila %d, columna %d: ", i+1,j+1);
				scanf("%d", &ma[i][j]);
		}
	}

	
	for(i=0;i<3;i++) {
		
		for(j=0;j<3;j++) {
			
			for(kit=0;kit<3;kit++) {
				
				for(kano=0;kano<3;kano++) {
					
					if (ma[i][j]<ma[kit][kano])
					{
						orden =ma[i][j];
						ma[i][j]=ma[kit][kano];
						ma[kit][kano]=orden ;
					}
				}
			}
		}
	}
	
	
	printf("Matriz ordenada:\n");
	
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			
			printf("%d", ma[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
