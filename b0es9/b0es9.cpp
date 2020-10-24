//
//  main.cpp
//  b0es9
//
//  Created by Roberto Ceola on 24/10/2020.
//sup che stampa la tabella ASCII in questo formato, limitandosi alle lettere maisucole, minuscole e le dieci cifre:
//CHAR: A ASCII : 65
//CHAR: B ASCII: 66
//CHAR: C ASCII: 67

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m = (int)'a';
    int M = (int)'A';
    int c = (int)'0';
    while( M <= (int)'Z'){
        cout << "CHAR: "<< (char)M<< " ASCII: " <<M << endl;
        M++;
    }
    while( m <= (int)'z'){
        cout << "CHAR: "<< (char)m<< " ASCII: " <<m << endl;
        m++;
    }
    while( c <= (int)'9'){
        cout << "CHAR: "<< (char)c<< " ASCII: " <<c << endl;
        c++;
    }
    return 0;
}

//cout << (int) 'A';
