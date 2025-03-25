#include <iostream>
#include <bitset>
using namespace std;
// constructor

int main() {  

    bitset<4>b1;
    cout << b1 << '\n';          // 0000
    cout << b1.set() << '\n';    // 1111, svi bitovi
    cout << b1.set(2, 0) << '\n';// 1011, bit 2 na 0
    cout << b1.set(2) << '\n';   // 1111, bit 2 na 1



    bitset<4>b2 (string("1011"));
    cout << b2 << endl;               // 1011
    cout << b2.reset(1) << endl;      // 1001
    cout << b2.reset() << endl;       // 0000
    
    bitset<4>b3 ( string("0001") ); //0001
    cout << b3 << endl;
    cout << b3.flip(2) << endl;     //0101
    cout << b3.flip() << endl;      //1010

    bitset<16>b16("1010101010101010");
    cout << b16 << endl;

    bitset<8>b8(0xa5);
    cout << b8 << endl;

}