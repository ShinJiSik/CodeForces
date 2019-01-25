//
//  main.cpp
//  Div2_499_E. Border
//
//  Created by 신지식 on 2018. 9. 19..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<long long> v;

void convert(long long num, int base){
    if(num == 0) return;
    convert(num/base, base);
    

    v.push_back(num%base);
}

int main(){
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        long long num;
        cin >> num;
        v.push_back(num);
    }
    set<int> s;
    
    for(int i = 0; i < n; i++){
        convert(v[i], k);
        cout << v.front()  <<  " " << v.back() << "\n";
        //s.insert(a);
    }
   
}
