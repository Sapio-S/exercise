//
//  main.cpp
//  pr21
//
//  Created by yuqing on 2019/3/16.
//  Copyright © 2019 yuqing. All rights reserved.
//


#include "Computer.h"
#include "ComputerCollection.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    ComputerCollection cc;
    for(int i = 0; i < n; i++){
        cin >> cc;
    }
    
    int m;
    cin >> m;
    
    for(int i = 0; i < m; i++){
        string opt, nameA, nameB;
        cin >> opt;
        if (opt == "ASK"){
            cin >> nameA >> nameB;
            if(cc[nameA] < cc[nameB]){
                cout << cc[nameB] << "\n" << cc[nameA] << "\n" << endl ;
            }else{
                cout << cc[nameA] << "\n" << cc[nameB] << "\n" << endl;
            }
        } else if (opt == "SELL"){
            cin >> nameA;
            --cc[nameA];
            cout << cc[nameA] << "\n" << endl;
        } else if (opt == "BUY"){
            cin >> nameA;
            ++cc[nameA];
            cout << cc[nameA] << "\n" << endl;
        } else if (opt == "CHANGE"){
            string price;
            cin >> nameA >> price;
            cc[nameA].setPrice(atoi(price.data()));
            cout << cc[nameA] << "\n" << endl;
        } else{
            continue;
        }
    }
    
    cc.sortByScore();
    cout << cc;
    
    return 0;
}
