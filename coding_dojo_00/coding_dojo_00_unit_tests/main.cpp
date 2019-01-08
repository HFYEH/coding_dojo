//
//  main.cpp
//  coding_dojo_00_unit_tests
//
//  Created by sharefun on 2019/1/8.
//  Copyright © 2019 Theia Tech. All rights reserved.
//

#include <iostream>
#include "operator.hpp"

int main(int argc, const char * argv[]) {
    
    // Arrange - prepare data
    Operator op;
    op.a = 1.0;
    op.b = 1.0;
    op.c = '+';
    double assume = 2.0; // assume
    
    // Act - operation
    double result = op.calculate();
    
    
    // Assert - validate result

    if (result == assume){
        std::cout << "Pass" << std::endl;
    }
    else {
        std::cout << "Test fail" << std::endl;
    }
    
    
    return 0;
}
