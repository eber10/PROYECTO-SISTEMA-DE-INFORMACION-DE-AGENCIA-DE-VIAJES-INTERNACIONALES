#include "Sistema.h"
#include <iostream>
#include<vector>
using namespace std;

int main(){
	Sistema sistema;
    sistema.cargarPasajerosDesdeArchivo("pasajeros.txt");
	
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
                    cout << "|1. Registrar Vuelo                |" << endl;
                    cout << "|2. Mostrar Vuelo                  |" << endl;
                    cout << "|3. Eliminar Vuelo                 |" << endl;
                    cout << "|4. Guardar Vuelo                  |" << endl;
                    cout << "|x. Volver al menu principal       |" << endl;
                    cout << "|----------------------------------|" << endl;
                    cin >> opcionReservas;
                    switch (opcionReservas) 
					{
                        case '1': 
						{
                            cout << "Reserva registrada con exito.\n";
                            system("pause");
                            break;
                        }
                        case '2':
                        {
                            system("pause");
                            break;
						}
                        case '3':
                        {
                        	break;
						}
                        case '4':
                        {
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
                    cout << "|          MENU RESERVAS           |" << endl;
                    cout << "|==================================|" << endl;
                    cout << "|1. Registrar reserva              |" << endl;
                    cout << "|2. Mostrar reservas               |" << endl;
                    cout << "|3. Eliminar reservas              |" << endl;
                    cout << "|4. Guardar reservas               |" << endl;
                    cout << "|x. Volver al menu principal       |" << endl;
                    cout << "|----------------------------------|" << endl;
                    cin >> opcionVuelo;
                    switch (opcionVuelo)
                    {
                        case '1': 
						{
                            cout << "Reserva registrada con exito.\n";
                            system("pause");
                            break;
                        }
                        case '2':
                        {
                            system("pause");
                            break;    
						}
                        case '3':
                        {
                        	break;	
						}
                        case '4':
                        {
                            cout << "Reservas guardadas con exito.\n";
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
