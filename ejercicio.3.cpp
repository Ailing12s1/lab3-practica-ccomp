#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int a = 1;
    int b = 1;

    cout << "Los " << n << " numeros de la secuencia de Fibonacci son:" << endl;
    for (int i=0; i<n; i++){
        cout << a << " ";
        int t= a;
        a = b;
        b = t+b;
    }
    cout << endl;
    return 0;
}