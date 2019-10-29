//
//  Computer.h
//  pr21
//
//  Created by yuqing on 2019/3/16.
//  Copyright © 2019 yuqing. All rights reserved.
//

#ifndef Computer_h
#define Computer_h
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class Computer{
private:
    string name;
    int num;
    int price;
    
    friend class ComputerCollection;
    
public:
    Computer(){};
    
    Computer(string name1, int num1, int price1){
        name = name1;
        num = num1;
        price = price1;
    }
    
    Computer operator++()
    {
        ++num;
        return Computer(name, num, price);
    }
    Computer operator--(){
        --num;
        if(num < 0) num = 0;
        return Computer(name, num, price);
    }
    
    friend istream &operator>>(istream& in, Computer& src);
    friend ostream& operator<<(ostream& out, const Computer& src);
    
    bool operator <(const Computer& d)
    {
        if(num < d.num)
        {
            return true;
        }
        if(num > d.num)
        {
            return false;
        }
        if(num == d.num){
            if(price < d.price)
                return true;
            else return false;
        }
        return false;
    }
    
    void setPrice(int p){
        this->price = p;
    }
};

#endif /* Computer_h */
