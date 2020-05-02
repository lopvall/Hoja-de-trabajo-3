#include <iostream>
 
using namespace std;
 
void descuento( float precio, int porcentaje )
{
    int cantidad;
    float total, descuento;
 
    cout << "Cantidad: ";
    cin >> cantidad;
 
    total = cantidad * precio;
 
    cout << "Subtotal: " << total;
 
    descuento = (total * porcentaje) / 100;
 
    cout << "\nDescuento (" << porcentaje << "%): " << descuento;
    cout << "\nTotal: " << total - descuento;
 
    cout << endl;
 
}
 
int main()
{
    int opcion;
    float numero;
 
    do{
        cout << "\n         PRODUCTOS "
             << "\n ==========================="
             << "\n 1.- Pizza Grande....... (Pulsa 1)"
             << "\n 2.- Pizza Familiar ... (Pûlsa 2)"
             << "\n 3.- Pizza Fiesta... (Pulsa 3)"
             << "\n 5.- Salir ....... (Pulsa 4)"
             << "\n ==========================="
             << "\n OPCION (1/4): ";
 
        cin >> opcion;
 
        switch( opcion ) {
 
            case 1:
                cout << "\nPrecio de la Pizza Grande: ";
                cin >> numero;
                descuento( numero, 10);
                break;
 
            case 2:
                cout << "\nPrecio de la Pizza Familia: ";
                cin >> numero;
                descuento( numero, 15);
                break;
 
            case 3:
                cout << "\nPrecio de la Pizza Fiesta: ";
                cin >> numero;
                descuento( numero, 20);
                break;
  
            case 4:
                break;
            default:
                cout << "\nOpcion incorrecta\n";
                break;
        }
    }while( opcion != 4 );
    cout << endl;
    return 0;
}

