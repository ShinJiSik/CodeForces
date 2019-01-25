//
//  main.cpp
//  Div2_491_C. Candies
//
//  Created by 신지식 on 2018. 9. 6..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;
int candies;
int v, p;
bool eat(int k){
    int n = candies;

    v = 0; p = 0;
    while(candies >= v + p){
        if(v >= candies/2 && v >= p){
            return true;
        }
        n = n - k;
        v += k;
        
        p += floor(n/10);
        n = n - floor(n/10);
        printf("%d %d\n", v, p);
    }
    return false;
}

int main(){
    cin >> candies;
    for(int i = 1; i <= candies; ++i){
        if(eat(i)){
            printf("%d\n", i);
            return 0;
        }
    }
}
