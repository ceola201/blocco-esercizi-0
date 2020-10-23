//
//  main.cpp
//  b0es4
//
//  Created by Roberto Ceola on 23/10/2020.
//


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    int a,b;
    cout << "inserisci due interi"<<endl;
    cin>> a >> b;
    if(a==b)
        cout<<"are equals"<<endl;
    if(a>b)
        cout<< a << "is larger"<<endl;
    else
        cout<< b <<"is larger"<<endl;
    return 0;
}
