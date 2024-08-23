#include <iostream>
#include <cmath>
#define pi 3
using namespace std;

float areacirculo(float r){
    float area;

    area = pi * pow(r,2);
    return area;
}

int main(){
    float r;

    cin >> r;
    cout << "A area do circulo e: " << areacirculo(r) << endl;
}