//
//  main.cpp
//  Div2_497_D. Pave the Parallelepiped
//
//  Created by 신지식 on 2018. 9. 20..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
using namespace  std;
long long check[1000001];
vector<long long> av,bv,cv;
set<tuple<int, int, int>> s;

int main(){
    int t;
    cin >> t;
    int a, b, c;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        
        for(int i = a; i >= 1; i++){
            if(a%i == 0)
                av.push_back(a/i);
        }
        
        for(int i = b; i >= 1; i++){
            if(b%i == 0)
                bv.push_back(b/i);
        }
        for(int i = c; i >= 1; i++){
            if(c%i == 0)
                cv.push_back(c/i);
        }
        
        
    }
}
