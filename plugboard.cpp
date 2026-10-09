// CICADA 6845 // TEST 07 — nastavenie 3/3
// Stroj potrebuje viac, než vidíš v zadaní.
// Dekóduj a doplň do Enigmy.
#include <iostream>
#include <string>

int main() {
    std::string signal = "et fu gl hm nz pw rv sa xc jk";  // každé písmeno je posunuté o 3 dopredu
    for (char &c : signal)
        if (c >= 'a' && c <= 'z') c = (c - 'a' - 3 + 26) % 26 + 'a';
    std::cout << signal << std::endl;
    return 0;
}
