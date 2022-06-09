#include <iostream>
using namespace std;
int main() {
    enum colors{red=5, black};
    enum suit{heart, diamond=8, spade=3, club};
    
    cout <<"The value of enum color : "<<red<<","<<black;
    cout <<"\nThe default value of enum suit : "<<heart<<","<<diamond<<","<<spade<<","<<club;
    return 0;
}
