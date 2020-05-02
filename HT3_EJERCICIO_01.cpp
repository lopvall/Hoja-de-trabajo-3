#include <iostream>
using namespace std;
int main(){
	int edad=0;
	int nacionalidad;
	float sueldofijo = 2500.00;
	float bonoextranjero = 500.00;
	float rango1 = 1400.00;
	float rango2 = 1500.00;
	float rango3 = 1200.00;
	float rango4 = 800.00;
	float nuevosueldo = 0;

cout << "\nIngrese edad de jugador: "<<endl;
                cin >> edad;
                cout << "\nIngrese 1 si es extranjero o 2 si es nacional:  "<<endl;
                cin >> nacionalidad;

        switch(nacionalidad) {
            case 1:
	if(edad <= 20){
	nuevosueldo = sueldofijo + rango1+bonoextranjero;
}
	else if(edad <= 25){
	nuevosueldo = sueldofijo + rango2 + bonoextranjero;
}
	else if(edad <= 30){
	nuevosueldo = sueldofijo + rango3 + bonoextranjero;
}
	else{
	nuevosueldo = sueldofijo + rango4 + bonoextranjero;
}
            case 2:
            
            	if(edad <= 20){
	nuevosueldo = sueldofijo + rango1;
}
	else if(edad <= 25){
	nuevosueldo = sueldofijo + rango2;
}
	else if(edad <= 30){
	nuevosueldo = sueldofijo + rango3;
}
	else{
	nuevosueldo = sueldofijo + rango4;
	}
                break;
            default:
                cout << "\nNacionalidad incorrecta\n";
                break;
        } 
        cout<<"\nEl salario del jugador es:  "<<nuevosueldo<<endl;
	return 0;
}

