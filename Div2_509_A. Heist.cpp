//
//  main.cpp
//  Div2_509_A. Heist
//
//  Created by 신지식 on 2018. 9. 27..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector<int> v;
int main(){
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int key;
        cin >> key;
        v.push_back(key);
    }
    sort(v.begin(), v.end());
    int len = v.size();
    int stolen = v[len-1] - v[0] - n + 1;
    printf("%d\n", stolen);
}
