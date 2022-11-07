
#include<stdio.h>


#define MAX_STRLEN 256


int main() {
	char empleado[MAX_STRLEN];
	float ht;
	float i;
	float sbh;
	float sm;
	float sn;
	printf("Nombre del Empleado =\n");
	scanf("%s",empleado);
	printf("Numeros de Horas Trabajadas en la semana =\n");
	scanf("%f",&ht);
	printf("Salario neto mensual = %f\n",sm);
	scanf("%f",&sm);
	sbh = sm/30/8;
	if (ht>48) {
		i = 1.35*(ht-48);
	} else {
		if (ht<=48) {
			i = 0;
		}
	}
	sn = sbh*8*6+i;
	printf("Salario Neto por Semana =%f\n",sn);
	scanf("%f",&sn);
	printf("el nombre del empleado es =%s\n",empleado);
	return 0;
}

