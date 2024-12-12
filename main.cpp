#include "Sistema.h"
#include <iostream>
#include<vector>
using namespace std;

int main(){
	Sistema sistema;
    sistema.cargarPasajerosDesdeArchivo("pasajeros.txt");
	sistema.cargarReservasDesdeArchivo("reservas.txt");
	sistema.cargarVuelosDesdeArchivo("vuelos.txt");

    bool salir1=false, salir2=false, salir3=false, salir4=false;
    char opcionPrincipal;
    do
	{
        system("cls");
        cout << "|==================================|" << endl;
        cout << "|        AGENCIA DE VIAJES         |" << endl;
        cout << "|          --NACIONALES--          |" << endl;
        cout << "|              __|__               |" << endl;
        cout << "|       --@--@--(_)--@--@--        |" << endl;
        cout << "|==================================|" << endl;
        cout << "|1. Gestion de  Pasajeros          |" << endl;
        cout << "|2. Gestion de  Reservas           |" << endl;
        cout << "|3. Gestion de vuelos              |" << endl;
        cout << "|x. Salir                          |" << endl;
        cout << "|----------------------------------|" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionPrincipal;
        switch (opcionPrincipal)
		{
            case '1': 
			{
                char opcionPasajero;
                do 
				{
                    system("cls");
                    cout << "|==================================|" << endl;
                    cout << "|          MENU PASAJEROS          |" << endl;
                    cout << "|==================================|" << endl;
                    cout << "|1. Registrar pasajero             |" << endl;
                    cout << "|2. Mostrar pasajeros              |" << endl;
                    cout << "|3. Eliminar pasajeros             |" << endl;
                    cout << "|4. Guardar pasajeros              |" << endl;
                    cout << "|x. Volver al menu principal       |" << endl;
                    cout << "|----------------------------------|" << endl;
                    cout << "Ingrese una opcion: ";
                    cin >> opcionPasajero;
                    switch (opcionPasajero)
					{
                        case '1': 
						{
                            string nombre, DNI, telefono, destino;
                            cout << "Ingrese nombre: ";
                            cin.ignore();
                            getline(cin, nombre);
                            cout << "Ingrese DNI: ";
                            getline(cin, DNI);
                            cout << "Ingrese telefono: ";
                            getline(cin, telefono);
                            cout << "Ingrese destino: ";
                            getline(cin, destino);
                            Pasajero pasajero(nombre, DNI, telefono, destino);
                            sistema.agregarPasajero(pasajero);
                            cout << "Pasajero registrado con exito.\n";
                            system("pause");
                            break;
                        }
                        case '2':
                        {
                            sistema.mostrarPasajeros();
                            system("pause");
                            break;
						}
                        case '3':
						{
							size_t posicion;
            				cout << "Ingrese el indice del pasajero a eliminar: ";
            				cin >> posicion;
            				sistema.eliminarPasajeros(posicion);                        	
                        	break;
						}
                        case '4':
                        {
                            sistema.guardarPasajerosEnArchivo("pasajeros.txt");
                            cout << "Datos guardados con exito.\n";
                            system("pause");
                            break;
						}
                        case 'x':
                        {
                            salir2=true;
                            break;
						}
                        default:
                        {
                            cout << "Opcion no valida. Intente nuevamente.\n";
                            system("pause");
						}
					}
                }while (!salir2);
                break;
            }
            case '2': 
			{
                char opcionReservas;
                do 
				{
                    system("cls");
                    cout << "|==================================|" << endl;
                    cout << "|          MENU RESERVAS           |" << endl;
                    cout << "|==================================|" << endl;
                    cout << "|1. Registrar reserva              |" << endl;
                    cout << "|2. Mostrar reserva                |" << endl;
                    cout << "|3. Eliminar reserva               |" << endl;
                    cout << "|4. Guardar reserva                |" << endl;
                    cout << "|x. Volver al menu principal       |" << endl;
                    cout << "|----------------------------------|" << endl;
                    cout << "Ingrese una opcion: ";
                    cin >> opcionReservas;
                    switch (opcionReservas) 
					{
                        case '1': 
						{
							string destino, fecha, ordenAsiento;
                            double pago; 
                            cout << "Destino: ";
                            cin.ignore();
                            getline(cin, destino);
                            cout << "Ingrese fecha: ";
                            getline(cin, fecha);
                            cout << "Ingrese orden de asiento: ";
                            getline(cin, ordenAsiento);
                            cout<< "Ingese el monto: S/. ";
                            cin >> pago; 
                            Reserva reserva(destino, fecha, ordenAsiento, pago);
                            sistema.agregarReserva(reserva);
                            cout << "Reserva registrada con exito.\n";
                            system("pause");
                            break;
                        }
                        case '2':
                        {
                        	sistema.mostrarReserva();
                            system("pause");
                            break;
						}
                        case '3':
                        {
                        	size_t posicion1;
            				cout << "Ingrese el indice de la reserva a eliminar: ";
            				cin >> posicion1;
           					sistema.eliminarReserva(posicion1);
                        	break;
						}
                        case '4':
                        {
                        	sistema.guardarReservasEnArchivo("reservas.txt");
                            cout << "Reservas guardadas con exito.\n";
                            system("pause");
                            break;
						}
                        case 'x':
                        {
                            salir3=true;
                            break;    
						}
                        default:
                        {
                            cout << "Opcion no valida. Intente nuevamente.\n";
                            system("pause");    
						}
                    }
                } while (!salir3);
                break;
            }
            case '3':
			{
                char opcionVuelo;
                do
				{
                    system("cls");
                    cout << "|==================================|" << endl;
                    cout << "|          MENU VUELOS             |" << endl;
                    cout << "|==================================|" << endl;
                    cout << "|1. Registrar Vuelo                |" << endl;
                    cout << "|2. Mostrar Vuelo                  |" << endl;
                    cout << "|3. Eliminar Vuelo                 |" << endl;
                    cout << "|4. Guardar Vuelo                  |" << endl;
                    cout << "|x. Volver al menu principal       |" << endl;
                    cout << "|----------------------------------|" << endl;
                    cout << "Ingrese una opcion: ";
                    cin >> opcionVuelo;
                    switch (opcionVuelo)
                    {
                        case '1': 
						{
							string origen, destino, duracion, estado;
            				cout << "Ingrese origen: ";
            				cin.ignore();
            				getline(std::cin, origen);
           					cout << "Ingrese destino: ";
            				getline(std::cin, destino);
            				cout << "Ingrese duracion: ";
            				getline(std::cin, duracion);
            				cout << "Ingrese estado:";
            				getline(std::cin, estado);

            				Vuelo vuelo(origen, destino, duracion, estado);
            				sistema.agregarVuelo(vuelo);
                            cout << "Vuelo registrada con exito.\n";
                            system("pause");
                            break;
                        }
                        case '2':
                        {
                        	sistema.mostrarVuelos();
                            system("pause");
                            break;    
						}
                        case '3':
                        {
                        	size_t posicion2;
            				cout << "Ingrese el indice del vuelo a eliminar: ";
            				cin >> posicion2;
            				sistema.eliminarVuelo(posicion2); 
                        	break;	
						}
                        case '4':
                        {
                        	sistema.guardarVuelosEnArchivo("vuelos.txt");
                            cout << "Vuelos guardadas con exito.\n";
                            system("pause");
                            break;    
						}
                        case 'x':
                        {
                            salir4=true;
                            break;    
						}
                        default:
                        {
                            cout << "Opcion no valida. Intente nuevamente.\n";
                            system("pause");
						}
					}
                }while(!salir4);
                break;
			}			
            case 'x':
            {
                salir1=true;
                cout << "Saliendo del sistema...\n";
                system("pause");
                break;    
			}
            default:
            {	
                cout << "Opcion no valida. Intente nuevamente.\n";
                system("pause");
			}	
		}
    } while (!salir1);
    return 0;
}
