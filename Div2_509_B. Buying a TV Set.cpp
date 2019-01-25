//
//  main.cpp
//  Div2_509_B. Buying a TV Set
//
//  Created by 신지식 on 2018. 9. 27..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
long long a, b, x, y;

long long gcd(long long x,long long y){
    if(y == 0) return x;
    return gcd(y,x % y);
}

int main(){
    cin >> a >> b >> x >> y;
    long long g = gcd(x, y);
    long long sum = 0;
    x /= g;
    y /= g;
    sum = min(a/x, b/y);
    printf("%lld\n", sum);
}
