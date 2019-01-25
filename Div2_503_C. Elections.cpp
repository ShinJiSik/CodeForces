//
//  main.cpp
//  Div2_503_C. Elections
//
//  Created by 신지식 on 2018. 9. 10..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int check[3001];
int main(){
    int v, p;
    cin >> v >> p;
    
    vector<pair<long long, long long>> f;
    for(int i = 0; i < v; i++){
        long long fp, coin;
        cin >> fp >> coin;
        f.push_back(make_pair(coin, fp));
        check[fp]++;
    }
    
    long long ans = 0;
    sort(f.begin(), f.end());
    
    int count = v/2 + 1;
    for(int i = 0; i < v; i++){
        if(count != 0 && (f[i].second != 1 || check[i] >= v/2)){
            ans += f[i].first;
            count--;
        }
    }
    
    printf("%lld\n", ans);
}
