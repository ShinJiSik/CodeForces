//
//  main.cpp
//  Div479_B. Two-gram
//
//  Created by 신지식 on 12/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct word{
    string w;
    int count;
};

bool cmp(const word &s, const word &c){
    return s.count > c.count;
}

int main(int argc, const char * argv[]) {
    int n;
    string s;
    
    cin >> n;
    cin >> s;
    vector<word> v;
    for(int i = 0; i < n-1; i++){
        string sub = s.substr(i, 2);
        int check = 0;
        for(int j = 0; j < v.size(); j++){
            if(v[j].w == sub){
                v[j].count++;
                check = 1;
                continue;
            }
        }
        if(check == 0)
            v.push_back({sub, 1});
        
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].w << "\n";
}
