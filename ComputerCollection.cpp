//
//  ComputerCollection.cpp
//  pr21
//
//  Created by yuqing on 2019/3/17.
//  Copyright © 2019 yuqing. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "ComputerCollection.h"
using namespace std;

istream& operator>> (istream& in, ComputerCollection& cc) {
    int i = cc.totalnum;
    in >> cc.com[i];
    cc.totalnum++;
    return in;
}

ostream& operator<< (ostream& out, const ComputerCollection& src) {
    for(int i = 0; i < src.totalnum; i++)
    {
        out << src.com[i];
        cout << endl;
    }
    return out;
}
