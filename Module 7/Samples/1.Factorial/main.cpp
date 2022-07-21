// Write a function to calc the factorial on number n, using static variable.

#include <iostream>

using namespace std;
void showstat( int curr ) {
    static int nStatic = 1;    // Value of nStatic is retained
    // between each function call
    nStatic *= curr;
    cout << "nStatic is " << nStatic << endl;
}

int main() {
    for ( int i = 1; i <= 5; i++ )
        showstat( i );
}