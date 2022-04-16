/*
 * calculos.c
 *
 *  Created on: 7 abr. 2022
 *      Author: bruno
 */

#include <stdio.h>
#include <stdlib.h>

float calcularPrecioDescuento(int numero){

	float descuento = .9;
	float valorDescuento;

	valorDescuento = numero * descuento;

	return valorDescuento;
}

float calcularPrecioCredito ( int numero){

	float credito = 1.25;
	float valorCredito;

	valorCredito = numero * credito;

	return valorCredito;
}

double calcularPrecioBitcoin(int numero){

	float bitcoin = 4606954.55;
	float valorBitcoin;

	valorBitcoin = numero / bitcoin;

	return valorBitcoin;
}

float calcularPrecioPorKm(float numero , float kilometros){

	float valorKm;

		valorKm = numero / kilometros;

	return valorKm;
}

float calcularDiferenciaPrecio(int y , int z){

	float diferencia;

	if (y > z){

		diferencia = y - z;
	}
	else{
		diferencia = z - y;
	}

	return diferencia;
}

void cargaForzada(int numero)
{

	float kilometros = 7090;
	float pasajeAerolineas = 1335000.66, pasajeLatam = 1350000.76;
	float descuento, interes, bitcoin, precioKm, diferenciaPrecio;

	printf("\nKMs ingresados: %.2fKms\n\n", kilometros);

	printf("\nPrecio Aerolineas: $%.2f \n\n", pasajeAerolineas);

	descuento = calcularPrecioDescuento(pasajeAerolineas);
	printf("Precio con tarjeta de debito: $%.2f\n", descuento);
	interes = calcularPrecioCredito (pasajeAerolineas);
	printf("Precio con tarjeta de credito: $%.2f\n", interes);
	bitcoin = calcularPrecioBitcoin(pasajeAerolineas);
	printf("Precio pagado con Bitcoin: B%f\n", bitcoin);
	precioKm = calcularPrecioPorKm(pasajeAerolineas, kilometros);
	printf("Mostrar precio unitario: $%.2f\n\n", precioKm);

	printf("Precio LATAM: $%.2f \n\n", pasajeLatam);

	descuento = calcularPrecioDescuento(pasajeLatam);
	printf("Precio con tarjeta de debito: $%.2f5\n", descuento);
	interes = calcularPrecioCredito (pasajeLatam);
	printf("Precio con tarjeta de credito: $%.2f\n", interes);
	bitcoin = calcularPrecioBitcoin(pasajeLatam);
	printf("Precio pagado con Bitcoin: B%f\n", bitcoin);
	precioKm = calcularPrecioPorKm(pasajeLatam, kilometros);
	printf("Mostrar precio unitario: $%.2f\n", precioKm);

	diferenciaPrecio = calcularDiferenciaPrecio(pasajeAerolineas, pasajeLatam);
	printf("\n\nLa diferencia de precio es: $%.2f\n", diferenciaPrecio);

}
