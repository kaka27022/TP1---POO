#ifndef CHACARA_H
#define CHACARA_H

#include <string>
#include "imoveis.h"
using namespace std;

class Chacara : public Imoveis
{
    bool salao_festa;
    bool salao_jogos;
    bool campo_futebol;
    bool churrasqueira;
    bool piscina;

public:
    Chacara(int id, float valor, string proprietario, string rua, string bairro, string cidade, int numero, 
    int quartos, int banheiros, bool salao_festa, bool salao_jogos, bool campo_futebol, bool churrasqueira, bool piscina) : 
    Imoveis(id, valor, proprietario, rua,  bairro, cidade, numero, quartos, banheiros){
        this->salao_festa = salao_festa;
        this->salao_jogos = salao_jogos;
        this->campo_futebol = campo_futebol;
        this->churrasqueira = churrasqueira;
    }

    bool getSalaoFesta();
    void setSalaoFesta(bool salao_festa_aux);
    bool getSalaoJogos();
    void setSalaoJogos(bool salao_jogos_aux);
    bool getCampoFutebol();
    void setCampoFutebol(bool campo_futebol_aux);
    bool getChurrasqueira();
    void setChurrasqueira(bool churrasqueira_aux);
    bool getPiscina();
    void setPiscina(bool piscina_aux);
};

#endif