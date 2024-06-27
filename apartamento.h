#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "imoveis.h"
using namespace std;

class Apartamento : public Imoveis
{
    int andar;
    float taxa_condominio;
    bool elevador;
    bool sacada;

public:
    Apartamento(int id, float valor, string proprietario, string rua, string bairro, string cidade, int numero, int quartos, int banheiros, 
    int andar, float taxa_condominio, bool elevador, bool sacada) :
    Imoveis(id, valor, proprietario, rua,  bairro, cidade, numero, quartos, banheiros){
        this->andar = andar;
        this->taxa_condominio = taxa_condominio;
        this->elevador = elevador;
        this->sacada = sacada;
    }

    int getAndar();
    void setAndar(int andar_aux);
    float getTaxaCondominio();
    void setTaxaCondominio(float taxa_condominio_aux);
    bool getElevador();
    void setElevador(bool elevador_aux);
    bool getSacada();
    void setSacada(bool sacada_aux);
};

#endif 