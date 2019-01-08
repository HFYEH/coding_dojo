//
//  operator.cpp
//  coding_dojo_00
//
//  Created by sharefun on 2019/1/8.
//  Copyright © 2019 Theia Tech. All rights reserved.
//

#include "operator.hpp"

double Operator::calculate() {
    switch (c) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            if (a == 0 && b == 0) {
                throw "Undefined";
            }
            if (b == 0) {
                throw "Inf";
            }
            
            return a / b;
            break;
        default:
            throw "illegal inputs(s)";
            break;
            
    }
}

    
