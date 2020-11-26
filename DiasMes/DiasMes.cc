#include <iostream>
#include "funciones.h"
using namespace std;

int main(){
    cout << "Introduce un numero del 1 al 12 y te indicare cuantos dias tiene ese mes" << endl;
    int mes;
    cin >> mes;
    cout << " Este mes tiene " << DiasMes (mes) << " dias" << endl;
    return 0;
    
}