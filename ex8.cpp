#include <iostream>
using namespace std;

bool verificacaobiss(int x){
    int i;

    if(x % 4 == 0 && x % 400 == 0){
        i = 1;
    }
    else{
        if(x % 4 == 0 && x % 100 != 0){
            i = 1;
        }
        else{
            i = 0;
        }
    }
    return (i == 1 ? true : false);
}

int main(){
    int x;

    cin >> x;
    if(verificacaobiss(x)){
        cout << "Este e um ano bissexto" << endl;
    }
    else{
        cout << "Nao e um ano bissexto" << endl;
    }
}