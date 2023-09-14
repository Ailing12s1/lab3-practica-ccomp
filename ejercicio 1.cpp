#include <iostream>
using namespace std;

int main(){
    int numero, residuo = 0;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    for (int i = 2; i*i <= numero; i++){
        if (numero % i == 0){
            return 0;
        }
    }
    return 1;
}