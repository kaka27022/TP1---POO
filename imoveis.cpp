#include "imoveis.h"
using namespace std;

int Imoveis :: getId(){
    return id;
} 

void Imoveis :: setId(int id_aux){
    id = id_aux;
}

float Imoveis :: getValor(){
    return valor;
}

void Imoveis :: setValor(float valor_aux){
    valor = valor_aux;
}

string Imoveis :: getProprietario(){
    return proprietario;
}

void Imoveis :: setProprietario(string proprietario_aux){
    proprietario = proprietario_aux;
}

string Imoveis :: getRua(){
    return rua;
}

void Imoveis :: setRua(string rua_aux){
    rua = rua_aux;
}

string Imoveis :: getBairro(){
    return bairro;
}

void Imoveis :: setBairro(string bairro_aux){
    bairro = bairro_aux;
}

string Imoveis :: getCidade(){
    return cidade;
}

void Imoveis :: setCidade(string cidade_aux){
    cidade = cidade_aux;
}

int Imoveis :: getNumero(){
    return numero;
}

void Imoveis :: setNumero(int numero_aux){
    numero = numero_aux;
}

int Imoveis :: getQuartos(){
    return quartos;
}

void Imoveis :: setQuartos(int quartos_aux){
    quartos = quartos_aux;
}

int Imoveis :: getBanheiros(){
    return banheiros;
}

void Imoveis :: setBanheiros(int banheiros_aux){
    banheiros = banheiros_aux;
}

