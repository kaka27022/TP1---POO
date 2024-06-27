#include "apartamento.h"
using namespace std;

int Apartamento :: getAndar(){
    return andar;
}

void Apartamento :: setAndar(int andar_aux){
    andar = andar_aux;
}

float Apartamento :: getTaxaCondominio(){
    return taxa_condominio;
}

void Apartamento :: setTaxaCondominio(float taxa_condominio_aux){
    taxa_condominio = taxa_condominio_aux;
}

bool Apartamento :: getElevador(){
    return elevador;
}

void Apartamento :: setElevador(bool elevador_aux){
    elevador = elevador_aux;
}

bool Apartamento :: getSacada(){
    return sacada;
}

void Apartamento :: setSacada(bool sacada_aux){
    sacada = sacada_aux;
}