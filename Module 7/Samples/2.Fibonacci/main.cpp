// Write a function to calc the Fibonacci Nth number, using static variable.
#define FMT_HEADER_ONLY

#include <iostream>
#include "include/fmt/format.h"
using namespace std;
void fib();

int main() {
    for(int i = 1; i < 5; i++)
    {
        fib();
    }
    fmt::print("Don't {}\n", "panic");

}

void fib()
{
    static int a=0,b=1,c;
    if(a==0)
        cout << a << endl << b <<endl;
    c=a+b;
    a=b;
    b=c;
    cout << c <<endl;
}