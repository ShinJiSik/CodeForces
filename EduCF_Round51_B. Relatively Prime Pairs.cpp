//
//  main.cpp
//  EduCF_Round51_B. Relatively Prime Pairs
//
//  Created by 신지식 on 2018. 9. 21..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    long long r, l;
    
    cin >> l >> r;
    puts("YES");
    for(long long i = l; i <= r; i += 2) {
        printf("%lld %lld\n", i, i+1);
    }
}
