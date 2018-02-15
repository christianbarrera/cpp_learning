//
//  binaryTrees.cpp
//  test_project
//
//  Created by Christian Barrera on 12/25/17.
//  Copyright © 2017 Christian Barrera. All rights reserved.
//

#include "binaryTrees.hpp"
#include <iostream>

using namespace std;

short CountBits(unsigned int x) {
    short num_bits = 0;
    while (x) {
        num_bits += x & 1;
        x >>= 1;
    }
    return num_bits;
}

