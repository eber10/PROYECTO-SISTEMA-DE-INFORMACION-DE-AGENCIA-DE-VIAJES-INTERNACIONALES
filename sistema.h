#ifndef SISTEMA_H
#define SISTEMA_H
#include "Pasajero.h"
#include "Reserva.h"
#include "Vuelo.h"
#include <vector>
using namespace std;
class Sistema 
{
	private:
    	vector<Pasajero> listaPasajeros;
    
	public:
    void agregarPasajero(const Pasajero& pasajero);
    void mostrarPasajeros() const;
    void eliminarPasajeros(size_t posicion);
    void guardarPasajerosEnArchivo(const string& nombreArchivo) const;
    void cargarPasajerosDesdeArchivo(const std::string& nombreArchivo);
    
};

#endif
