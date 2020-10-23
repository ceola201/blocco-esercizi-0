//
//  main.cpp
//  b0es8
//
//  Created by Roberto Ceola on 23/10/2020.
//
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b;
    cout<<"inserisci due numeri interi"<<endl;
    cin>>a>>b;
    if(a%b==0)
        cout<<"il primo numero è multiplo del secondo"<<endl;
    cout<<"il primo non è multiplo del secondo"<<endl;
    return 0;
}


