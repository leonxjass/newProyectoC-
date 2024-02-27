//include methods
#include <iostream>
#include <string>

//using methods
using namespace std;

class AUTOMOVIL
{
private:
  string tipoAuto;


public:
    // Constructor por defecto que inicializa en null los elementos
    AUTOMOVIL(){};

    //Metodos de la clase

    void setTipoAuto(string newTipoAuto){
      tipoAuto = newTipoAuto;
    }

    string getTipoAuto(){
      return tipoAuto;
    }
};
