#include <iostream>
using namespace std;

int somadosintervalos(int x, int y){
    int soma = 0, maior, menor;
    if(x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
    while(menor <= maior){
        soma += menor;
        menor++;
    }

    return soma;
}

int main(){
    int A, B;

    cin >> A >> B;
    cout << somadosintervalos(A, B) << endl;
}