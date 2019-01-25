//
//  main.cpp
//  Div479_C. Less or Equal
//
//  Created by 신지식 on 12/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k, t;
    vector<int> v;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> t;
        v.push_back(t);
    }
    
    sort(v.begin(), v.end());
    if(k == 0){
        if(v[0] - 1 > 0)
            cout << v[0] - 1 << "\n";
        else
            cout << "-1\n";
    }
    else if(k < v.size()){
        if(v[k] != v[k - 1])
            cout << v[k - 1] << "\n";
        else
            cout << "-1\n";
    }
    else
        cout << v[k - 1] << "\n";
}
