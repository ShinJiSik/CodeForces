//
//  main.cpp
//  Div2_511_A. Little C Loves 3 I
//
//  Created by 신지식 on 2018. 9. 21..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    long long n, t, t1, t2;
    cin >> n;
    long long a , b ,c;
    a = 2;
    b = n/3;
    c = n - b - a;
    t1 = n/3;
    t2 = n%3;
    if(n == 3)
        printf("1 1 1\n");
    else{
        if(b > 1 && c > 1){
            while(1){
                if(b%3 != 0 && c%3 != 0)
                    break;
                b--;
                c++;
            }
        }
        printf("2 %lld %lld\n", b, c);
    }
}
