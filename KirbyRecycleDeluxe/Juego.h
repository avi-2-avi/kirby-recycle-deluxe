#pragma once
#include "Costa.h"
#include "Sierra.h"
#include "Selva.h"
class Juego
{
private:
	Costa* nvCosta;
	Sierra* nvSierra;
	Selva* nvSelva;
	/*
	 Contador de nivel
	 Costa - 1
	 Sierra - 2
	 Selva - 3
	 */
	time_t time_init_app;
	int nivel;
	int contador;
public:
	Juego();
	~Juego();
	void Jugar_Selva(Graphics^ g, Bitmap^ bmpFruta, Bitmap^ bmpAnaconda, 
		Bitmap^ bmpArana, Bitmap^ bmpPirana, Bitmap^ bmpKirbyVuela, Bitmap^ bmpBasura);
	void Jugar_Costa();
	void Jugar_Sierra(Graphics^ g, Bitmap^ bmpCushuro, Bitmap^ bmpGranizo, 
		Bitmap^ bmpCondor, Bitmap^ bmpKirbyVuela,  Bitmap^ bmpKirbyCong, Bitmap^ bmpBasura);
	int getNivel();
	void Desplazar(dir mover);
	int getVidas();
	int getTiempo();
	int getContador();
	bool getFin();
	bool getGanador();
	void Resumen(Graphics^ g);
	void setNivel();
};

