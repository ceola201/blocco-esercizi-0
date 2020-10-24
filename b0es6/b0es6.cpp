//
//  main.cpp
//  b0es6
//
//  Created by Roberto Ceola on 24/10/2020.
//sup che si fa inserire lunghezza raggio e calcola diamentro, circonferenza e area, fare i calcoli in cout

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const float pi=3.14;
    float r;
    cout <<"inserisci il raggio del cerchio" <<endl;
    cin>> r;
    cout<<"il diametro del cerchio é "<< 2*r <<", la circonferenza "<< 2*r*pi <<", l'area "<<r*r*pi<<endl;
    return 0;
}
