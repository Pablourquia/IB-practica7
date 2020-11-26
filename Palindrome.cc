#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrome (string my_string){
    string reversed_string;
    for (int i = 0; i < my_string.length(); i++){
        reversed_string.insert(0,1,my_string[i]);
    }
        
    if (my_string == reversed_string){
        return true;
        cout << " es palindroma" << endl;
            }
    else {
        return false;
        cout << " no es palindroma" << endl;
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
    
    for (int i = 0; i<words.size();i ++){
        if (IsPalindrome(words[i])){
            cout << words[i] << " es palindrona" << endl;

        }
        else{
            cout << words[i] << " no es palindrona" << endl;
        }
        
    }

}