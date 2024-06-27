#include "casa.h"
using namespace std;

int Casa :: getAndares(){
    return andares;
}

void Casa :: setAndares(int andares_aux){
    andares = andares_aux;
}

bool Casa :: getSalaJantar(){
    return sala_jantar;
}

void Casa :: setSalaJantar(bool sala_jantar_aux){
    sala_jantar = sala_jantar_aux;
}

