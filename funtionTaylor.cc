#include <iostream>
#include<math.h>
using namespace std;

double factorial (int number){
    int factorial = 1;
    for (int i = 1; i <= number; i++){
        factorial = factorial * i;
    }
    return factorial;
}

double MyExp (double exponent, int num_terms){
    int funtion;
    for (int i = 1 ;i <= num_terms; i++){
         funtion = funtion + (1/(factorial(i))*(pow(exponent, i)));
        
    }
    return funtion;

}

int main(){
    cout<< "Este programa calcula la funcion e^x, dependiendo del valor que tu le des a la x" << endl;
    cout<< "Dime el numero que quieres que sea el exponente y el numero de terminos que quieres que utilize la funcion" << endl;
    double exponent; 
    cin >> exponent;
    int num_terms;
    cin>> num_terms;

    cout << " La solucion calculada con la formula del desarrollo de Teylor es la siguiente " << 1 + MyExp(exponent, num_terms) << endl;
    cout << " La solucion calculada mediante la formula exp es la siguiente " << exp(exponent) << endl;

    

    
}