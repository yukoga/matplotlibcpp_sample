#include <iostream>
#include "src/lib/matplotlib/matplotlibcpp.h"


namespace plt = matplotlibcpp;

int main()
{
    plt::plot({1, 2, 3, 4});
    // plt::show();
    plt::save("./hoge.png");
    return EXIT_SUCCESS;
}