#ifndef IMOVEIS_H
#define IMOVEIS_H

#include <string>
using namespace std;

class Imoveis
{
    int id;
    float valor;
    string proprietario;
    string rua;
    string bairro;
    string cidade;
    int numero;
    int quartos;
    int banheiros;

public:
    Imoveis(int id, float valor, string proprietario, string rua, string bairro, string cidade, int numero, int quartos, int banheiros){
        this->id = id;
        this->valor = valor;
        this->proprietario = proprietario;
        this->rua = rua;
        this->bairro = bairro;
        this->cidade = cidade;
        this->numero = numero;
        this->quartos = quartos;
        this->banheiros = banheiros;
    }
    
    int getId();
    void setId(int id_aux);
    float getValor();
    void setValor(float valor_aux);
    string getProprietario();
    void setProprietario(string proprieterio_aux);
    string getRua();
    void setRua(string aux_rua);
    string getBairro();
    void setBairro(string bairro_aux);
    string getCidade();
    void setCidade(string cidade_aux);
    int getNumero();
    void setNumero(int numero_aux);
    int getQuartos();
    void setQuartos(int quartos_aux);
    int getBanheiros();
    void setBanheiros(int banheiros_aux);
};

#endif //Imoveis