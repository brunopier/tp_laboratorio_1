/*
 * calculos.h
 *
 *  Created on: 7 abr. 2022
 *      Author: bruno
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

/// @fn float calcularPrecioDescuento(int)
/// @brief Permite calcular el valor descuento de un entero ingresado.
///
/// @param int  El Entero que voy a retornar.
/// @return El flotante producto del resultado obtenido.
float calcularPrecioDescuento(int numero);

/// @fn float calcularPrecioCredito(int)
/// @brief Permite calcular el valor con incremento de un entero ingresado.
///
/// @param int  El Entero que voy a retornar.
/// @return El flotante producto del resultado obtenido.
float calcularPrecioCredito ( int numero);

/// @fn double calcularPrecioBitcoin(int)
/// @brief Permite calcular el valor en bitcoin de un entero ingresado.
///
/// @param int  El Entero que voy a retornar.
/// @return El Double producto del resultado obtenido.
double calcularPrecioBitcoin(int numero);

/// @fn float calcularPrecioPorKm(float, float)
/// @brief Permite calcular el precio unitario entre los dos flotantes.
///
/// @param numero1 Valor de los pasajes
/// @param kilometros Cantidad de kilometros del vuelo.
/// @return El resultado flotante de la division.
float calcularPrecioPorKm(float numero1 , float kilometros);

/// @fn float calcularDiferenciaPrecio(int, int)
/// @brief Permite calcular la diferencia de valores entre los pasajes.
///
/// @param y El valor del pasaje de Aerolineas Argentinas
/// @param z El valor del pasaje de LATAM
/// @return El resultado flotante de la resta.
float calcularDiferenciaPrecio(int y, int z);

/// @fn void cargaForzada(int)
/// @brief Imprime la respuesta a todos los datos ingresados y solicitados.
///
/// @param Retorna todos los mensajes pedidos en el tp.
void cargaForzada(int numero);


#endif /* CALCULOS_H_ */
