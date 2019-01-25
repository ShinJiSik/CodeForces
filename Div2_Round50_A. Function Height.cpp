//
//  main.cpp
//  Div2_Round50_A. Function Height
//
//  Created by 신지식 on 2018. 9. 7..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//
#include <iostream>
using namespace std;
long long n,k;

int main(){
    cin >> n >> k;
    if (k/n == 0) cout << 1;
    else if(k % n == 0) cout << k/n;
    else if (k % n != 0) cout << k/n+1;
}
