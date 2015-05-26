//
//  main.cpp
//  p1001
//
//  Created by zhangxi on 5/26/15.
//  Copyright (c) 2015 zhangxi. All rights reserved.
//

#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, const char * argv[]) {
    const int digit=6;
    for (int ix=0; ix !=64; ++ix){
        cout << bitset<digit>(ix) << endl;
    }
    return 0;
}
