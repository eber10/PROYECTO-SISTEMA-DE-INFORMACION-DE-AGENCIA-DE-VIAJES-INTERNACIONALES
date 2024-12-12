#ifndef VUELO_H
#define VUELO_H

#include <string>
using namespace std;

class Vuelo{
private:
    string origen;
    string destino;
    string duracion;
    string estado;
public:
    Vuelo(const string& origen, const string& destino, 
             const string& duracion, const string& estado);


    string getOrigen() const;
    string getDestino() const;
    string getDuracion() const;
    string getEstado() const;


    
    void mostrarDatos() const;
};

#endif
