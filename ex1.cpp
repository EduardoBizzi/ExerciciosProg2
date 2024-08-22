#include <iostream>
using namespace std;

bool mult4 (int valor){
    return (valor % 4 == 0 ? true : false);
}

int main(){
    int x;

    cin >> x;
    if(mult4(x)){
        cout << x << " e multiplo de 4" << endl;
    }
    else{
        cout << x << " nao e multiplo de 4" << endl;
    }
    return 0;
}