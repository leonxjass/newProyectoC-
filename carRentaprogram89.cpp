/* rentalCarSys.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
	Anderson Leon - 32251109
*/


#include <iostream>

using namespace std;

class CLIENTE{/*codigo del relacionado con datos del cliente*/};

class VEHICULO {

private:
	string tipo;
	string marca;
	string modelo;
	int numeroPuertas;
	int anio;
	int diasAlquilados = 0;
	double costoPorDia = 0;
	double totalAlquiler = 0.0;

public:
	VEHICULO() {
		tipo = "No especificado";
		marca = "No especificado";
		modelo = "No especificado";
		numeroPuertas = 4;
		anio = 0000;
		totalAlquiler = 0.0;
	}


	void setTipo(string newTipo) { tipo = newTipo; }
	void setMarca(string newMarca) { marca = newMarca; }
	void setModelo(string newModelo) { marca = newModelo; }
	void setNumeroPuertas(int cantPuertas) { numeroPuertas = cantPuertas; }
	void setDiasAlquilados(int newAlquiler) { diasAlquilados = newAlquiler; }
	void setAnio(int newAnio) { anio = newAnio; }
	void setCostoPorDia(double newCosto) { costoPorDia = newCosto; }

	void tiempoAlquiler(double diasAlquiler) {
		if(getTipo() == "tipodeauto") {

		}
	}

	string getTipo() { return tipo; }
	string getMarca() { return marca; }
	string getModelo() { return modelo; }
	int getNumeroPuertas() { return numeroPuertas; }
	int getAnio() { return anio; }
	int getDiasAlquilados() { return diasAlquilados; }
	double getCostoPorDia() { return costoPorDia; }

	void getDatosAutomovil() {
		cout << "El tipo de Automovil es: " << getTipo() << endl;
		cout << "Registrado en la marca: " << getMarca() << endl;
		cout << "Modelo del Vehiculo: " << getModelo() << endl;
		cout << getNumeroPuertas() << ": puertas" << endl;
		cout << "Año del Vehiculo: " << getAnio() << endl;
		cout << "Año del Vehiculo: " << getCostoPorDia() << endl;
	}

};

class FACTURA{/*Codigo de la factura*/};

int main()
{
	VEHICULO turismo;
	turismo.setTipo("Turismo");
	turismo.setMarca("Nissan");
	turismo.setModelo("Civic");
	turismo.setAnio(2012);
	turismo.setNumeroPuertas(4);
	
	//Obteniendo los datos del Objeto
	turismo.getDatosAutomovil();

}
