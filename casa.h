#ifndef CASA_H
#define CASA_H

#include <string>
#include "imoveis.h"
using namespace std;

class Casa : public Imoveis
{
    int andares;
    bool sala_jantar;

public:
    Casa(int id, float valor, string proprietario, string rua, string bairro, string cidade, int numero, int quartos, int banheiros, int andares, bool sala_jantar) :
    Imoveis(id, valor, proprietario, rua,  bairro, cidade, numero, quartos, banheiros){
        this->andares = andares;
        this->sala_jantar = sala_jantar;
    }
    
    int getAndares();
    void setAndares(int andares_aux);
    bool getSalaJantar();
    void setSalaJantar(bool sala_jantar_aux);
};

#endif 