#include "chacara.h"
using namespace std;

bool Chacara :: getSalaoFesta(){
    return salao_festa;
}

void Chacara :: setSalaoFesta(bool salao_festa_aux){
    salao_festa = salao_festa_aux;
}

bool Chacara :: getSalaoJogos(){
    return salao_jogos;
}

void Chacara :: setSalaoJogos(bool salao_jogos_aux){
    salao_jogos = salao_jogos_aux;
}

bool Chacara :: getCampoFutebol(){
    return campo_futebol;
}

void Chacara :: setCampoFutebol(bool campo_futebol_aux){
    campo_futebol = campo_futebol_aux;
}

bool Chacara :: getChurrasqueira(){
    return churrasqueira;
}

void Chacara :: setChurrasqueira(bool churrasqueira_aux){
    churrasqueira = churrasqueira_aux;
}

bool Chacara :: getPiscina(){
    return piscina;
}

void Chacara :: setPiscina(bool piscina_aux){
    piscina = piscina_aux;
}

