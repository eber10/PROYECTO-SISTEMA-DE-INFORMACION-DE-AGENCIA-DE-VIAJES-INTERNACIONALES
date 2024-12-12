#ifndef PASAJERO_H
#define PASAJERO_H
#include <string>
using namespace std;

class Pasajero {
	private:
   		string nombre;
    	string DNI;
    	string telefono;
    	string destino;
	public:
    	Pasajero(const string& nombre, const string& DNI, const string& telefono, const string& destino);
    	string getNombre() const;
    	string getDNI() const;
    	string getTelefono() const;
    	string getDestino() const;
    	void mostrarDatos() const;
    
};

#endif
