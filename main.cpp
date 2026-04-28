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
    uint8_t a = 4;   // 00000100

    setBit(a, 0, 1); // ustawiamy najm³odszy bit

    cout << getBit(a, 0) << endl; // powinno byæ 1
    cout << (int)a << endl;       // powinno byæ 5

    return 0;
}
