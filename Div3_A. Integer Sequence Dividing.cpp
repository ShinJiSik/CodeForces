//
//  main.cpp
//  Div3_A. Integer Sequence Dividing
//
//  Created by 신지식 on 09/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n;
    cin >> n;
    
    if(n%4 == 1 || n%4 == 2)
        cout << "1\n";
    else
        cout << "0\n";
}
