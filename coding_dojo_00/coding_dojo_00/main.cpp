//
//  main.cpp
//  coding_dojo_00
//
//  Created by sharefun on 2019/1/8.
//  Copyright © 2019 Theia Tech. All rights reserved.
//

#include <iostream>
#include "operator.hpp"

using namespace std;

int main()
{
    string a_string, b_string;
    char c;
    string result = "";
    
    cout << "Input a: ";
    cin >> a_string;
    cout << "Input operator: ";
    cin >> c;
    cout << "Input b: ";
    cin >> b_string;
    
    double a = atof(a_string.c_str());
    double b = atof(b_string.c_str());
    
    Operator oper = Operator();
    oper.a = a;
    oper.b = b;
    oper.c = c;
    try {
        result = to_string(oper.calculate());
    } catch (char const* error) {
        result = error;
    }
    
    cout << result << endl;
    return 0;
}


