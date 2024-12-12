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
        vector<Reserva> listaReserva;
        vector<Vuelo> listaVuelos;

	public:
    void agregarPasajero(const Pasajero& pasajero);
    void mostrarPasajeros() const;
    void eliminarPasajeros(size_t posicion);
    void guardarPasajerosEnArchivo(const string& nombreArchivo) const;
    void cargarPasajerosDesdeArchivo(const std::string& nombreArchivo);
    //////////////////////////////////////////
    void agregarReserva(const Reserva& reserva); 
    void mostrarReserva() const;
    void eliminarReserva(size_t posicion);
    void guardarReservasEnArchivo(const string& nombreArchivo) const;
    void cargarReservasDesdeArchivo(const std::string& nombreArchivo);
    void agregarVuelo(const Vuelo& vuelo);
    void mostrarVuelos() const;
    void eliminarVuelo(size_t posicion);
    void guardarVuelosEnArchivo(const string& nombreArchivo) const;
    void cargarVuelosDesdeArchivo(const std::string& nombreArchivo);
};

#endif
