#include <iostream>
#include <cstdint>

using namespace std;

int getBit(uint8_t a, int bit) {
    return (a >> bit) & 1;
}

void setBit(uint8_t &a, int bit, int value) {
    if (value == 1)
        a |= (1 << bit);
    else
        a &= ~(1 << bit);
}

int main() {
    uint8_t a = 4;   

    setBit(a, 0, 1); 

    cout << getBit(a, 0) << endl; 
    cout << (int)a << endl;       

    return 0;
}
