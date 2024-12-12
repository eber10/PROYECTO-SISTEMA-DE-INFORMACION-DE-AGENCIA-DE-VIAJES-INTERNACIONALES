#include "vuelo.h"
#include <iostream>
using namespace std;


Vuelo::Vuelo(const string& origen, const string& destino, 
                   const string& duracion, const string& estado)
    : origen(origen), destino(destino), duracion(duracion), estado(estado) {}


string Vuelo::getOrigen() const {
    return origen;
}

string Vuelo::getDestino() const {
    return destino;
}

string Vuelo::getDuracion() const {
    return duracion;
}
string Vuelo::getEstado() const{
	return estado;
}



void Vuelo::mostrarDatos() const {
    cout << "Origen: " << origen << "\nDestino: " << destino
              << "\nDuracion: " << duracion <<"\nEstado:"<<estado<<"\n";
}
