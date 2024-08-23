#include <iostream>
using namespace std;

float CparaF(float c){
    return ((c * 9)/5 + 32);
}

int main(){
    float celsius;

    cin >> celsius;
    cout << "Transformando " << celsius << " graus celsius em Fahrenheit, obtemos " << CparaF(celsius) << endl;
}