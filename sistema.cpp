#include "Sistema.h"
#include <iostream>
#include <fstream>
using namespace std;

void Sistema::agregarPasajero(const Pasajero& pasajero) {
    listaPasajeros.push_back(pasajero);
    cout << "Pasajero agregado correctamente.\n";
}

void Sistema::mostrarPasajeros() const {
    if (listaPasajeros.empty()) {
        cout << "No hay pasajeros registrados.\n";
        return;
    }

    cout << "\nLista de Pasajeros:\n";
    for (const auto& pasajero : listaPasajeros) {
        pasajero.mostrarDatos();
        cout << "---------------------\n";
    }
}
void Sistema::eliminarPasajeros(size_t posicion) {
    if (posicion < listaPasajeros.size()) {
        listaPasajeros.erase(listaPasajeros.begin() + posicion);
        cout << "Pasajero eliminado correctamente.\n";
    } else {
        cout << "Posicion invalida. No se pudo eliminar el pasajero.\n";
    }
}

void Sistema::guardarPasajerosEnArchivo(const string& nombreArchivo) const {
    ofstream archivo(nombreArchivo, ios::app); 

    if (!archivo.is_open()) 
	{
        cout << "No se pudo abrir el archivo para guardar los datos.\n";
        return;
    }

    for (const auto& pasajero : listaPasajeros) {
        archivo << "Nombre: " << pasajero.getNombre() << "\n";
        archivo << "DNI: " << pasajero.getDNI() << "\n";
        archivo << "Telefono: " << pasajero.getTelefono() << "\n";
        archivo << "Destino: " << pasajero.getDestino() << "\n";
        archivo << "---------------------\n";
    }

    archivo.close(); 
    cout << "Datos de los pasajeros guardados en el archivo " << nombreArchivo << " correctamente.\n";
}

void Sistema::cargarPasajerosDesdeArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);  

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo para leer los datos.\n";
        return;
    }

    string nombre, DNI, telefono, destino;
    string linea;
    
    while (getline(archivo, linea))
	{
  		if(linea.find("Nombre: ") == 0) 
		{  
            nombre = linea.substr(8);
            getline(archivo, linea); 
            DNI = linea.substr(5);   
            getline(archivo, linea); 
            telefono = linea.substr(10); 
            getline(archivo, linea);  
            destino = linea.substr(9);

        Pasajero pasajero(nombre, DNI, telefono, destino);
        listaPasajeros.push_back(pasajero);
        }
   }
	
    archivo.close();
}

void Sistema::agregarReserva(const Reserva& reserva) {
    listaReserva.push_back(reserva);
    cout << "Pasajero agregado correctamente.\n";
}


void Sistema::mostrarReserva() const {
    if (listaReserva.empty()) {
        cout << "No hay pasajeros registrados.\n";
        return;
    }

    cout << "\nLista de Reservas:\n";
    for (const auto& reserva : listaReserva) {
        reserva.mostrarDatos();
        cout << "---------------------\n";
    }
}
void Sistema::eliminarReserva(size_t posicion) {
    if (posicion < listaReserva.size()) {
        listaReserva.erase(listaReserva.begin() + posicion);
        cout << "Reserva eliminada correctamente.\n";
    } else {
        cout << "Posicion invalida. No se pudo eliminar la reserva.\n";
    }
}

void Sistema::guardarReservasEnArchivo(const string& nombreArchivo) const {
    ofstream archivo(nombreArchivo, ios::app); 

    if (!archivo.is_open()) 
	{
        cout << "No se pudo abrir el archivo para guardar los datos.\n";
        return;
    }

    for (const auto& reserva : listaReserva) {
        archivo << "Destino: " << reserva.getDestino() << "\n";
        archivo << "Fecha: " << reserva.getFecha() << "\n";
        archivo << "Orden de Asiento: " << reserva.getOrdenAsiento() << "\n";
        archivo << "Pago: "<<reserva.getPago() << "\n";
        archivo << "---------------------\n";
    }

    archivo.close(); 
    cout << "Datos de los pasajeros guardados en el archivo " << nombreArchivo << " correctamente.\n";
}

void Sistema::cargarReservasDesdeArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);  

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo para leer los datos.\n";
        return;
    }

    string destino, fecha, ordenAsiento;
    double pago; 
    string linea;
    
    while (getline(archivo, linea))
	{
  		if(linea.find("Destino: ") == 0) 
		{  
            destino = linea.substr(8);
            getline(archivo, linea); 
            fecha = linea.substr(7);   
            getline(archivo, linea); 
            ordenAsiento = linea.substr(18);
			getline(archivo, linea);
			string pagoStr = linea.substr(6);
			pago = stod(pagoStr);
            

        Reserva reserva(destino, fecha, ordenAsiento, pago);
        listaReserva.push_back(reserva);
        }
   }

    archivo.close();
}

void Sistema::agregarVuelo(const Vuelo& vuelo) {
    listaVuelos.push_back(vuelo);
    cout << "Vuelo agregado correctamente.\n";
}


void Sistema::mostrarVuelos() const {
    if (listaVuelos.empty()) {
        cout << "No hay vuelos registrados.\n";
        return;
    }

    cout << "\nLista de vuelos:\n";
    for (const auto& vuelos : listaVuelos) {
        vuelos.mostrarDatos();
        cout << "---------------------\n";
    }
}
void Sistema::eliminarVuelo(size_t posicion) {
    if (posicion < listaVuelos.size()) {
        listaVuelos.erase(listaVuelos.begin() + posicion);
        cout << "vuelo eliminado correctamente.\n";
    } else {
        cout << "Posicion invalida. No se pudo eliminar el vuelo.\n";
    }
}
void Sistema::guardarVuelosEnArchivo(const string& nombreArchivo) const {
    ofstream archivo(nombreArchivo, ios::app); 

    if (!archivo.is_open()) 
	{
        cout << "No se pudo abrir el archivo para guardar los datos.\n";
        return;
    }

    for (const auto& vuelo : listaVuelos) {
        archivo << "Origen: " << vuelo.getOrigen() << "\n";
        archivo << "Destino: " << vuelo.getDestino() << "\n";
        archivo << "Duracion: " << vuelo.getDuracion() << "\n";
        archivo << "Estado: " << vuelo.getEstado() << "\n";
        archivo << "---------------------\n";
    }

    archivo.close(); 
    cout << "Datos de los vuelos guardados en el archivo " << nombreArchivo << " correctamente.\n";
}

void Sistema::cargarVuelosDesdeArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);  

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo para leer los datos.\n";
        return;
    }

    string origen, destino, duracion, estado;
    string linea;
    
    while (getline(archivo, linea))
	{
  		if(linea.find("Origen: ") == 0) 
		{  
            origen = linea.substr(8);
            getline(archivo, linea); 
            destino = linea.substr(9);   
            getline(archivo, linea); 
            duracion = linea.substr(10); 
            getline(archivo, linea);  
            estado = linea.substr(8);

        Vuelo vuelo(origen, destino, duracion, estado);
        listaVuelos.push_back(vuelo);
        }
   }

    archivo.close();
}


