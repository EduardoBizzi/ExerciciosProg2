#include <iostream>
using namespace std;

bool par (int valor){
    return (valor % 2 == 0 ? true : false);
}

int main(){
    int x;

    cin >> x;
    if(par(x)){
        cout << x << " e um numero par" << endl;
    }
    else{
        cout << x << " e um numero impar" << endl;
    }
}