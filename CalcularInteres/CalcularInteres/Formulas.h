#pragma once

float CalcuValFut(float Capital, float tiempo, float tasa) {
	float Valfut;
	Valfut = Capital * (1 + tiempo * (tasa / 100));

	return Valfut;
}

float CalcuValCap(float Stock, float tiempo, float tasa) {
	float Capital;
	Capital = Stock / (1 + (tasa / 100) * tiempo);

	return Capital;
}

float CalcuValTiempo(float Stock, float Capital, float Tasa) {
	float Tiempo;
	Tiempo = ((Stock / Capital) - 1) / (Tasa/100);
	
	return Tiempo;
}

float CalcuValTasa(float Stock, float Capital, float Tiempo) {
	float Tasa;
	Tasa = ((Stock / Capital) - 1) / Tiempo;
	
	return Tasa*100;
}

float convAnual(float valor) {
	valor = valor * 30 / 360;
	return valor;
}

float convAnualEx(float valor) {
	valor = valor * 30 / 365;
	return valor;
}

float convDia(float valor) {
	valor = valor/ 360;
	return valor;
}

float convDiaEx(float valor) {
	valor = valor/ 365;
	return valor;
}