/*
 *	FahrCel.c
 *
 *	Imprime una tabla de Fahrenheit a Celcius
 *
 *	Gomez, Juan Ignacio
 *
 *	20180503
 */

#include <stdio.h>
#include "Conversor.h"

double Celcius (int tempf){
	double tempc;

	tempc=(5.0/9.0)*(tempf-32);

	return tempc;
}

int main(void) {

	int fahr;

	for (fahr = down; fahr <= top; fahr = fahr + jump)
		printf("%3d %6.1f \n", fahr, Celcius(fahr));

}
