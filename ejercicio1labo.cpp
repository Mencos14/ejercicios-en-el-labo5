#include <iostream>

using namespace std;

int main() {
   int option;
    double valor;

    cout << "Bienvenido al conversor de unidades" << endl;
    cout << "1. Centímetros a Metros" << endl;
    cout << "2. Kilogramos a Gramos" << endl;
    cout << "Seleccione la conversión deseada: ";
    cin >> option;

    switch(option) {
        case 1:
            cout << "Ingrese el valor en centímetros: ";
            cin >> valor;
            cout << valor << " centímetros equivalen a " << valor / 100 << " metros" << endl;
            break;
        case 2:
            cout << "Ingrese el valor en kilogramos: ";
            cin >> valor;
            cout << valor << " kilogramos equivalen a " << valor * 1000 << " gramos" << endl;
            break;
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}
