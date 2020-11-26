#include <iostream>
#include <string>
#include <vector>
using namespace std;

string IsPalindrome (string my_string){
    for (int i = 0; i<my_string.length(); i++){
        for (int j=my_string.length -1; j>=0; j--){
            if (my_string[i]==my_string[j]){
                cout << "es palindrona";
            }
            else {
                cout << "no es palindrona";
            }
        }
    }
}

vector <string> words;

int main(){
    cout << "Este programa va a generar una lista de palabras a partir de las que me digas y te diran si son palindronas  o no" << endl;
    cout << "¿Cual es la primera palabra que quieres introducir?" << endl;
    string word1;
    cin >> word1;
    words.push_back(word1);
    cout << "¿Cual es la segunda palabra que quieres introducir?" << endl;
    string word2;
    cin >> word2;
    words.push_back(word2);
    cout << "¿Cual es la tercera palabra que quieres introducir?" << endl;
    string word3;
    cin >> word3;
    words.push_back (word3);

    cout << words(0) << IsPalindrome (0);
    cout << words(1) << IsPalindrome (1);
    cout << words(2) << IsPalindrome (2);

}