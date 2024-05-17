#include <iostream>
using namespace std;
int main()
{
    int opcion; 

    double celsius, fahrenheit, kelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    cout << "Seleccione la conversión deseada:" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Celsius a Kelvin" << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit" << endl;
            break;
        case 2:
            kelvin = celsius + 273.15;
            cout << celsius << " grados Celsius equivalen a " << kelvin << " Kelvin" << endl;
            break;
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}