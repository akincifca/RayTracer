//
// Created by Fatih Can AKINCI on 5/11/21.
// twitter, github: akincifca
//

#include <iostream>
#include "tuple.h"

using namespace rt;

int main() {

    Tuple t1 {1, 2, 3, 4};
    Tuple t2 = -t1;

    std::cout << "t1.w: " << t1.GetW() << std::endl;
    std::cout << "t2.w: " << t2.GetW() << std::endl;

    return 0;
}
