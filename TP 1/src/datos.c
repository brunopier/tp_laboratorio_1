/*
 * datos.c
 *
 *  Created on: 11 abr. 2022
 *      Author: bruno
 */

#include <stdio.h>
#include <stdlib.h>

float ingresarCantidadDeKilometros(float numero){

	float kms;

	printf("ingresar la cantidad de kilometros del vuelo: ");
	scanf("%f", &kms);

	while (kms < 1 || kms > 100000){

		printf("Error, el valor ingresado es incorrecto.\n\n");
		printf("Ingresa nuevamente los kms: ");
		scanf("%f", &kms);

	}

	return kms;
}

float ingresarPrecioAerolineas(float numero){

	float valor;

	printf("Ingresar el valor del vuelo de Aerolineas: ");
	scanf("%f", &valor);

	while (valor < 1 || valor > 1000000){

			printf("Error, el valor ingresado es incorrecto.\n\n");
			printf("Ingresa nuevamente el precio del pasaje: ");
			scanf("%f", &valor);

		}

	return valor;
}

float ingresarPrecioLatam(float numero){

	float valor;

	printf("Ingresar el valor del vuelo de LATAM: ");
	scanf("%f", &valor);

	while (valor < 1 || valor > 1000000){

		printf("Error, el valor ingresado es incorrecto.\n\n");
		printf("Ingresa nuevamente el precio del pasaje: ");
		scanf("%f", &valor);

	}

	return valor;
}
