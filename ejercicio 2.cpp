#include <iostream>
using namespace std;

bool perfecto (int num){
    int divisor = 1;

    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            divisor += i;
            if (i != num/ i){
                divisor += num/i;
            }
        }
    }

    return divisor == num;
}

int main(){
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Los " << n << " numeros perfectos son: " << endl;
    int numero = 0;
    int sison = 0;

    while(sison < n){
        if(perfecto(numero)){
            cout << numero;
            sison++;
            if (sison < n){
                cout << " ";
            }
        }
        numero++;
    }
    cout << endl;
    return 0;
}