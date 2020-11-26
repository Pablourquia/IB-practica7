#include <iostream>
using namespace std;

bool IsPrime(int number_possible_prime) {
  
  for(int i=2; i<number_possible_prime ;i++){
    int dividers = 0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            dividers+=1;
        }

     }
    if(dividers==2){
        cout<<i<<endl;
    }
}
 return 0;
}

int main(){
  cout << "Introduce un numero y te dire los numeros primos que hay hasta llegar a ese numero" << endl;
  int number;
  cin >> number;
  cout << IsPrime (number)<< endl;


    
  } 

    
