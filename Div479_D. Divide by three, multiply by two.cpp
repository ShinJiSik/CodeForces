//
//  main.cpp
//  Div479_D. Divide by three, multiply by two
//
//  Created by 신지식 on 12/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
    long long num;
    long long change;
    int count;
};

bool cmp(const node &u, const node &v){
    if(u.count > v.count)
        return true;
    else if(u.count == v.count)
        return u.num < v.num;
    return false;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<node> v;
    long long t;
    for(int i = 0; i < n; i++){
        cin >> t;
        v.push_back({t, t, 0});
    }
    
    bool check = false;
    while(check != true){
        int cc = 0;
        for(int i = 0; i < n; i++){
            if(v[i].change % 3 == 0){
                v[i].count++;
                cc = 1;
                v[i].change /= 3;
            }
        }
        if(cc == 0)
            check = true;
    }
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < n; i++)
        cout << v[i].num << " ";
    cout << "\n";
}
