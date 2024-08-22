#include <iostream>
#include <cmath>
using namespace std;

int exponencial(int a, int b){
    return pow(a,b);
}

int main(){
    int a, b;

    cin >> a >> b;
    cout << exponencial(a,b) << endl;
}