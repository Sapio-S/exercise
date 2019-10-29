//
//  ComputerCollection.h
//  pr21
//
//  Created by yuqing on 2019/3/16.
//  Copyright © 2019 yuqing. All rights reserved.
//

#ifndef ComputerCollection_h
#define ComputerCollection_h
#include "Computer.h"
#include <iostream>
#include <string.h>
using namespace std;

class ComputerCollection{
public:
    Computer com[100];
    int totalnum = 0;
    
public:
    ComputerCollection(){};
    
    void sortByScore(){
        for(int i = 0; i < totalnum; i++){
            for(int j = i+1 ; j < totalnum; j++){
                if(com[i] < com[j]){
                    Computer cominst = com[i];
                    com[i] = com[j];
                    com[j] = cominst;
                }
            }
        }
        return;
    }
    
    Computer& operator[](string s){
        for(int i = 0; i < totalnum; i++){
            if(strcmp(s.c_str(), com[i].name.c_str()) == 0){
                return com[i];
            }
        }
        return com[1];
    }
    
    friend istream &operator>>(istream& in, ComputerCollection& cc);
    friend ostream& operator<<(ostream& out, const ComputerCollection& cc);
};


#endif /* ComputerCollection_h */
