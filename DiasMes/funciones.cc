#include "funciones.h"
int DiasMes (int mes){
    if (mes == 1 || mes == 3 ||mes == 5 ||mes ==7 || mes ==8 || mes == 10 || mes == 12){
        return 31;
    }
    else if (mes == 4 || mes== 6 || mes == 9 || mes == 11){
        return 30;
    }
    else if (mes == 2){
        return 28;
    }
    else {
        return -1;
    }
}