//
//  Computer.cpp
//  pr21
//
//  Created by yuqing on 2019/3/17.
//  Copyright © 2019 yuqing. All rights reserved.
//

#include <stdio.h>
#include "Computer.h"
using namespace std;

istream& operator>> (istream& in, Computer& src) {
    string na;
    in >> na;
    unsigned long pos1 = na.find("-");
    unsigned long pos2 = na.find("-", pos1+1);
    src.name = na.substr(0,pos1);
    src.num = atoi((na.substr(pos1+1, pos2)).c_str());
    src.price = atoi(na.substr(pos2+1).c_str());
    return in;
}

ostream& operator<< (ostream& out, const Computer& src) {
    out << src.name << "-num-" << src.num << "-price-" << src.price;
    return out;
}
