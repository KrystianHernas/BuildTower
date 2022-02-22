#include "head.h"

// W tej wersji postaram siê zaimplementowaæ sprawdzenie,
//czy spacer wystarczy na okreœlon¹ przez u¿ytkownika iloœæ minut

int main()
{
    std::vector<std::string> s = towerBuilder(inputNumberOfFloors());
    for (int i = 0; i < s.size(); i++) {
        std::cout << s[i]<<std::endl;
    }
    return 0;
}
