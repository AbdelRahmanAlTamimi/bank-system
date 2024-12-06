#include <iostream>
#include "clsMainScreen.h"

int main()
{
    clsMainScreen::ShowMainMenue();

    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}