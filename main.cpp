#include "head.h"

// W tej wersji postaram si� zaimplementowa� sprawdzenie,
//czy spacer wystarczy na okre�lon� przez u�ytkownika ilo�� minut

int main()
{
    std::vector<std::string> s = towerBuilder(inputNumberOfFloors());
    for (int i = 0; i < s.size(); i++) {
        std::cout << s[i]<<std::endl;
    }
    return 0;
}
