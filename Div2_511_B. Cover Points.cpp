//
//  main.cpp
//  Div2_511_B. Cover Points
//
//  Created by 신지식 on 2018. 9. 22..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
bool greatx(const pair<int, int> &u, const pair<int, int> &v) {
    if(u.first == v.first)
        return u.second > v.second;
    return u.first > v.first;
}
bool greaty(const pair<int, int> &u, const pair<int, int> &v) {
    if(u.second == v.second)
        return u.first > v.first;
    return u.second > v.second;
}


int main(){
    int n;
    vector<pair<int, int>> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    
    sort(v.begin(), v.end(), greatx);
    int x1 = v[0].first;
    int y1 = v[0].second;
    
    sort(v.begin(), v.end(), greaty);
    int x2 = v[0].first;
    int y2 = v[0].second;

    if(x1 == x2 && y1 == y2 && x1 == y1){
        int sol = max(x1, y1);
        printf("%d\n", sol*2);
    }
    else{
        int ans1 = max(x1, x2);
        int ans2 = max(y1, y2);
        int sol = max(ans1, ans2);
        
        printf("%d\n", sol + 1);
    }
}*/
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(ans < x + y)
            ans = x + y;
    }
    
    printf("%d\n", ans);
}

