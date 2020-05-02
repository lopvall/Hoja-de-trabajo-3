#include <iostream>
using namespace std;
int main(){
int modelocolor = 0;
int edad = 0;
float incremento =0;
float preciomodelo = 0;
float preciototal = preciomodelo * incremento;

cout<<"Ingrese  la edad del cliente:  "<<endl;
cin>>edad;

	if(edad < 31){
	incremento += 0.25;
}
	else if(edad > 61){
	incremento += 0.30;
	}
	else {
	incremento += 0;
}

cout<<"Ingrese el modelo y color del Vehiculo  \nModelo A Blanco=1 \nModelo A Metalizado=2 \nModelo A Otros=3 \nModelo B Blanco=4 \nModelo B Metalizado=5 \nModelo B Otros=6:  "<<endl;
cin>>modelocolor;

	if(modelocolor ==1){
	preciomodelo += ((240.50*incremento)+240.50);
}
	else if(modelocolor == 2){
	preciomodelo += ((330.00*incremento)+330.00);
	}
	else if(modelocolor == 3){
	preciomodelo += ((270.50*incremento)+270.50);
}
	else if(modelocolor == 4){
	preciomodelo += ((300.00*incremento)+300);
	}
	else{if(modelocolor == 5){
	preciomodelo += ((360.50*incremento)+360.50);
}
	else if(modelocolor == 6){
	preciomodelo +=((330.00*incremento)+330);
	}
	else{
	 cout<<"\nCodigo de Modelo y color no existe";
}
	}
cout.precision(5);
cout<<"\nEl precio para el seguro es:  "<<preciomodelo;
return 0;

}
