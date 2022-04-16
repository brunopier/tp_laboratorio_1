/*
 ============================================================================
 Name        : TP.c
 Author      : Bruno Pierdomenico
 Version     : 1F
 Copyright   : Your copyright notice
 Description :

 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
 para ofrecerlos a sus clientes.
 Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
 El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar Kilómetros: ( km=x)

2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:

3. Calcular todos los costos:

a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados

“Latam:
a) Precio con tarjeta de débito:
b) Precio con tarjeta de crédito:
c) Precio pagando con bitcoin :
d) Precio unitario:

Aerolíneas:
a) Precio con tarjeta de débito:
b) Precio con tarjeta de crédito:
c) Precio pagando con bitcoin :
d) Precio unitario:
La diferencia de precio es :

5. Carga forzada de datos
6. Salir

Aclaraciones del funcionamiento:
El menú se tiene que ver tal cual está descrito
 ============================================================================
 */
#include "calculos.h"
#include "datos.h"

int main(void) {

	setbuf(stdout,NULL);

	int opc = 0,opcDos = 0,opcTres = 0;
	int calculoForzado = 0;
	float valorKilometro,valorDescuento, valorCredito, diferenciaPrecio, x = 0,y = 0,z = 0;
	double precioBitcoin;

	do{

		printf("\nMENU DE OPCIONES");
		printf("\n1. Ingresar Kms del vuelo. ");
		printf("\n2. Ingresar precio del vuelo.");
		printf("\n3. Valor a abonar segun la forma de pago.");
		printf("\n4. Informar resultados.");
		printf("\n5. Ingresar datos del vuelo");
		printf("\n6. Salir");
		printf("\n\nElegir opcion: ");
		scanf("%d", &opc);
		system("cls");
		switch(opc)
		{
			case 1:

				x = ingresarCantidadDeKilometros(x);

				break;
			case 2:

				do{

					printf("\nSUBMENU");
					printf("\n1. Precio vuelo Aerolineas Argentina");
					printf("\n2. Precio vuelo LATAM");
					printf("\n3. Salir");
					printf("\n\nElegir opcion: ");
					scanf("%d", &opcDos);
					switch(opcDos)
					{
					case 1:

						y = ingresarPrecioAerolineas(y);

						break;
					case 2:

						z = ingresarPrecioLatam(z);

						break;
					}
				}while(opcDos != 3);

			break;

			case 3:

				do{
					printf("\nSUBMENU\n");
					printf("\n1. Precio con tarjeta de debito.");
					printf("\n2. Precio con tarjeta de credito.");
					printf("\n3. Precio con Bitcoin.");
					printf("\n4. Precio unitario.");
					printf("\n5. Salir");
					printf("\n\nElegir opcion: ");
					scanf("%d", &opcTres);
					switch(opcTres)
					{
						case 1:

							valorDescuento = calcularPrecioDescuento(y);
							printf("\nEl valor del precio de Aerolineas con descuento es: $%.2f", valorDescuento);
							valorDescuento = calcularPrecioDescuento(z);
							printf("\nEl valor del precio de LATAM con descuento es: $%.2f\n", valorDescuento);

							break;
						case 2:

							valorCredito = calcularPrecioCredito (z);
							printf("\nEl valor del vuelo de LATAM abonado con credito es: $%.2f", valorCredito);
							valorCredito = calcularPrecioCredito (y);
							printf("\nEl valor del vuelo de aerolines abonado con credito es: $%.2f\n", valorCredito);
							break;
						case 3:

							precioBitcoin = calcularPrecioBitcoin(z);
							printf("\nEl precio del vuelo de LATAM en Bitcoin es : B%f", precioBitcoin);
							precioBitcoin = calcularPrecioBitcoin(y);
							printf("\nEl precio del vuelo de Aerolineas en Bitcoin es : B%f\n", precioBitcoin);
							break;
						case 4:

							valorKilometro = calcularPrecioPorKm(z , x);
							printf("\nEl valor del kilometro del vuelo de LATAM es: $%.2f", valorKilometro);
							valorKilometro = calcularPrecioPorKm(y , x);
							printf("\nEl valor del kilometro del vuelo de Aerolineas es: $%.2f\n", valorKilometro);
							break;
					}
				}while(opcTres != 5);

				break;
			case 4:

				if(x == 0){

					printf("No se ingresaron kilometros, por favor ingrese un valor valido.\n\n");
					x = ingresarCantidadDeKilometros(x);

				}else if (y == 0){

					printf("No se ingreso el precio del vuelo de Aerolineas Argentinas.\n\n");
					y = ingresarPrecioAerolineas(y);
				}else if (z == 0){

					printf("No se ingreso el precio del vuelo de LATAM.\n\n");
					z = ingresarPrecioLatam(z);
				}else{

					printf("\nKms ingresados: %.2f km\n", x);

					// LATAM

					printf("\nEl valor del vuelo de LATAM es : $%.2f\n", z);

					valorDescuento = calcularPrecioDescuento(z);
					printf("\nEl valor del precio de LATAM con descuento es: $%.2f", valorDescuento);

					valorCredito = calcularPrecioCredito (z);
					printf("\nEl valor del vuelo de LATAM abonado con credito es: $%.2f", valorCredito);

					precioBitcoin = calcularPrecioBitcoin(z);
					printf("\nEl precio del vuelo de LATAM en Bitcoin es : B%f", precioBitcoin);

					valorKilometro = calcularPrecioPorKm(z , x);
					printf("\nEl valor del kilometro del vuelo de LATAM es: $%.2f", valorKilometro);

					// Aerolineas Argentinas

					printf("\n\nEl valor del vuelo de aerolineas es : $%.2f\n", y);

					valorDescuento = calcularPrecioDescuento(y);
					printf("\nEl valor del precio de Aerolineas con descuento es: $%.2f", valorDescuento);

					valorCredito = calcularPrecioCredito (y);
					printf("\nEl valor del vuelo de aerolines abonado con credito es: $%.2f", valorCredito);

					precioBitcoin = calcularPrecioBitcoin(y);
					printf("\nEl precio del vuelo de Aerolineas en Bitcoin es : B%f", precioBitcoin);

					valorKilometro = calcularPrecioPorKm(y , x);
					printf("\nEl valor del kilometro del vuelo de Aerolineas es: $%.2f\n", valorKilometro);

					diferenciaPrecio = calcularDiferenciaPrecio(y, z);
					printf("\n\nLa diferencia de precio es: $%.2f\n", diferenciaPrecio);

				}

				break;
			case 5:

				cargaForzada(calculoForzado);

				break;

		}
	}while(opc != 6);



	return 0;
}




