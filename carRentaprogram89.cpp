//include methods
#include <iostream>
#include <string>
#include "automovil.h"

//using methods
using namespace std;

int main(int argc, char const *argv[]) {

  std::cout << "Rentadora de Autos" << '\n';
  AUTOMOVIL SEDAN;
  SEDAN.setTipoAuto("Sedan");

  //Prompt en pantalla;
  std::cout << "El tipo de Auto es "<< SEDAN.getTipoAuto() << '\n';


  return 0;
}






void comentarios(/* arguments */) {
  /* comentarios
     21/02 Inicia prueba de escritorio  base automovil y metodos principales
     24/02 Codificacion clase base automovil para con su metodo basico
     26/02 Creamos repositorio en linea para control de versiones del codigo

  */
}
