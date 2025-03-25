#include <iostream>
#include <bitset>
using namespace std;
// BITSET

int main() {                //76543210
    bitset<8>bajt;          //00000000
    cout << bajt << endl;
    
    bajt[0] = 1;              //00000001
    cout << bajt << endl;


    
    bajt[1] = 1;              //00000011
    cout << bajt << endl;

    bajt[2] = true;           //00000111
    cout << bajt << endl;

    bajt[2] = 0;

    bajt[1] = false; 

    cout << bajt << endl;
}