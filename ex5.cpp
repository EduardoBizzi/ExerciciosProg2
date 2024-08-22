#include <iostream>
using namespace std;

int fatorial(int n){
    int fatorial = n, i;
    

    for(i = n-1;i >= 1;i--){
        fatorial *= i;
    }
    return fatorial;
}

int main(){
    int x;

    cin >> x;
    if(x > 0){
        cout << "O fatorial do numero " << x << " e " << fatorial(x) << endl;
    }
    else{
        cout << "O fatorial do numero " << x << " e " << 1 << endl;
    }
}