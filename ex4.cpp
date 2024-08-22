#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.14

float volumedaesfera(float r){
    float volume;

    volume = (4 * pi * pow(r,3)) / 3;
    return volume;
}

int main(){
    float r;

    cin >> r;
    cout << "O volume dessa esfera e " << volumedaesfera(r) << endl;
}