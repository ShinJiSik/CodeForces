//
//  main.cpp
//  Div2_493_A. Balloons
//
//  Created by 신지식 on 2018. 10. 1..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;

vector<pair<int, int>> v;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.push_back(make_pair(num, i+1));
    }
    
    if(n == 1){
        printf("-1\n");
    }
    else if(n == 2){
        if(v[0].first == v[1].first)
            printf("-1\n");
        else
            printf("1\n%d\n", v[1].second);
    }
    else{
        sort(v.begin(), v.end());
        printf("1\n%d\n", v[0].second);
    }
}
