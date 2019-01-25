//
//  main.cpp
//  Div479_A. Wrong Subtraction
//
//  Created by 신지식 on 10/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        if(n % 10 != 0) n--;
        else if(n % 10 == 0) n /= 10;
    }
    cout << n << "\n";
}
