#include <iostream>
#include "Formulas.h"
#include <locale.h>
using namespace std;


int main() {
	do{
	float capital, stock, tasaInteres, interes, tiempo;
	int opCal, opTasa, opTiempo, opBasCal, opSeg;
	setlocale(LC_ALL, "spanish");

	cout << "Bienvenido a la CalFIN" << endl;
	cout << "¿Que desea calcular?   Digite un numero" << endl;
	cout << "1. Capital" << endl;
	cout << "2. Valor Futuro (Stock)" << endl;
	cout << "3. Tasa de Interes" << endl;
	cout << "4. Tiempo" << endl;
	cin >> opCal;

	//Elección de opción
	switch (opCal)
	{
		case 1:
			//Ingresa el Stock
			cout << "Ingrese el stock: " << endl;
			cin >> stock;

			//Eleccion de tasa
			/*cout << "Elija la tasa:\n 1. Tasa Mensual\n 2. Tasa Anual\n";
			cin >> opTasa;*/
			cout << "Ingrese la tasa de interes: " << endl;
			cin >> tasaInteres;

			//Conversión de la tasa
			/*if (opTasa == 1) {
				tasaInteres = convAnual(tasaInteres);
			}*/
			cout << "Elegir:\n 1. Ordinario \n 2. Exacto\n";
			cin >> opBasCal;

			if (opBasCal == 1) {
				cout << "Elija el tiempo:\n 1. Meses\n 2. Años\n 3. Días\n";
				cin >> opTiempo;
				cout << "Ingrese el tiempo: " << endl;
				cin >> tiempo;

				//Conversión del tiempo
				if (opTiempo == 1) {
					tiempo = convAnual(tiempo);
				}
				else if (opTiempo == 3) {
					tiempo = convDia(tiempo);
				}
			}
			else
			{
				cout << "Elija el tiempo:\n 1. Meses\n 2. Años\n 3. Días\n";
				cin >> opTiempo;
				cout << "Ingrese el tiempo: " << endl;
				cin >> tiempo;

				//Conversión del tiempo
				if (opTiempo == 1) {
					tiempo = convAnualEx(tiempo);
				}
				else if (opTiempo == 3) {
					tiempo = convDiaEx(tiempo);
				}
			}

			//Ingresa el tiempo


			capital = CalcuValCap(stock, tiempo, tasaInteres);
			interes = stock - capital;

			cout << "El Capital es:  " << capital << endl;
			cout << "El Interes es:  " << interes << endl;

			cout << "Seguir calculando ? " << endl;
			cout << "1. Si\n 2. No\n";
			cin >> opSeg;
			if (opSeg == 1) {
				return main();
			}
			else {
				return 0;
			}
			break;
		case 2:
			//Ingresa el Capital
			cout << "Ingrese el capital: " << endl;
			cin >> capital;

			//Eleccion de tasa
			/*cout << "Elija la tasa:\n 1. Tasa Mensual\n 2. Tasa Anual\n";
			cin >> opTasa;*/
			cout << "Ingrese la tasa de interes: " << endl;
			cin >> tasaInteres;

			//Conversión de la tasa
			/*if (opTasa == 1) {
				tasaInteres = convAnual(tasaInteres);
			}*/

			//Ingresa el tiempo
			cout << "Elegir:\n 1. Ordinario \n 2. Exacto\n";
			cin >> opBasCal;

			if (opBasCal == 1) {
				cout << "Elija el tiempo:\n 1. Meses\n 2. Años\n 3. Días\n";
				cin >> opTiempo;
				cout << "Ingrese el tiempo: " << endl;
				cin >> tiempo;

				//Conversión del tiempo
				if (opTiempo == 1) {
					tiempo = convAnual(tiempo);
				}
				else if (opTiempo == 3) {
					tiempo = convDia(tiempo);
				}
			}
			else
			{
				cout << "Elija el tiempo:\n 1. Meses\n 2. Años\n 3. Días\n";
				cin >> opTiempo;
				cout << "Ingrese el tiempo: " << endl;
				cin >> tiempo;

				//Conversión del tiempo
				if (opTiempo == 1) {
					tiempo = convAnualEx(tiempo);
				}
				else if (opTiempo == 3) {
					tiempo = convDiaEx(tiempo);
				}
			}

			stock = CalcuValFut(capital, tiempo, tasaInteres);
			interes = stock - capital;

			cout << "El Valor futuro es:  " << stock << endl;
			cout << "El interes es:  " << interes << endl;
			cout << "Seguir calculando ? " << endl;
			cout << "1. Si\n 2. No\n";
			cin >> opSeg;
			if (opSeg == 1) {
				return main();
			}
			else {
				return 0;
			}
			break;
		case 3:
			//Ingresa el Capital
			cout << "Ingrese el capital: " << endl;
			cin >> capital;

			//Ingresa el Stock
			cout << "Ingrese el stock: " << endl;
			cin >> stock;

			//Ingresa el tiempo
			cout << "Elegir:\n 1. Ordinario \n 2. Exacto\n";
			cin >> opBasCal;

			if (opBasCal == 1) {
				cout << "Elija el tiempo:\n 1. Meses\n 2. Años\n 3. Días\n";
				cin >> opTiempo;
				cout << "Ingrese el tiempo: " << endl;
				cin >> tiempo;

				//Conversión del tiempo
				if (opTiempo == 1) {
					tiempo = convAnual(tiempo);
				}
				else if (opTiempo == 3) {
					tiempo = convDia(tiempo);
				}
			}
			else
			{
				cout << "Elija el tiempo:\n 1. Meses\n 2. Años\n";
				cin >> opTiempo;
				cout << "Ingrese el tiempo: " << endl;
				cin >> tiempo;

				//Conversión del tiempo
				if (opTiempo == 1) {
					tiempo = convAnualEx(tiempo);
				}
				else if (opTiempo == 3) {
					tiempo = convDiaEx(tiempo);
				}
			}

			tasaInteres = CalcuValTasa(stock, capital, tiempo);

			cout << "La tasa de interes es de " << tasaInteres << "%" << endl;
			cout << "Seguir calculando ? " << endl;
			cout << "1. Si\n 2. No\n";
			cin >> opSeg;
			if (opSeg == 1) {
				return main();
			}
			else {
				return 0;
			}
			break;

		case 4:
			//Ingresa el Capital
			cout << "Ingrese el capital: " << endl;
			cin >> capital;

			//Ingresa el Stock
			cout << "Ingrese el stock: " << endl;
			cin >> stock;

			//Eleccion de tasa
			/*
			cout << "Elija la tasa:\n 1. Tasa Mensual\n 2. Tasa Anual\n";
			cin >> opTasa;
			*/
			cout << "Ingrese la tasa de interes: " << endl;
			cin >> tasaInteres;

			//Conversión de la tasa
			/*if (opTasa == 1) {
				tasaInteres = convAnual(tasaInteres);
			}*/

			tiempo = CalcuValTiempo(stock, capital, tasaInteres);

			cout << "El tiempo es de " << tiempo << " años" << " o " << ceil(tiempo * 360) << " días" << endl;

			cout << "Seguir calculando ? " << endl;
			cout << "1. Si\n 2. No\n";
			cin >> opSeg;
			if (opSeg == 1) {
				return main();
			}
			else {
				return 0;
			}
			break;
		}
	}while (true);

	system("pause>0");
	return 0;
}


