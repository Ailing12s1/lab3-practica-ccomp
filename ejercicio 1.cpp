#include <iostream>
using namespace std;

bool primo (int num){
    if (num <= 1){
        return false;
    }
    for (int i = 2; i*i <= num; ++i){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int numero; //numero ingresado por usuario
    cout << "Ingrese un numero: ";
    cin >> numero;
    int n = 2;
    int encontrados = 0;

    while (encontrados < numero){
        if (primo(n)){
            cout << n << " ";
            encontrados++;
        }
        n++
    }   
    cout << endl;
    return 0;
}