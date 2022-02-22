#include "head.h"

//definicja funkcji
std::vector<std::string> towerBuilder(int nFloors)
{
    std::vector<std::string> str; str.resize(nFloors);
    for (int i = 0; i < nFloors; i++) {
        str[i].resize((nFloors * 2) - 1); std::fill(str[i].begin(), str[i].end(), ' '); str[i][nFloors-1] = '*';
        for (int j = 0; j < i+1; j++) {
            str[i][nFloors - j-1] = '*'; str[i][nFloors + j-1] = '*';
        }
    }
    return str;
}

int inputNumberOfFloors() {
    int numberOfFloors = 0; std::cout << "Input number of floors: " << std::endl;
    std::cin >> numberOfFloors;
    return numberOfFloors;
}