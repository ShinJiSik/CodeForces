//
//  main.cpp
//  Div2_493_B. Cutting
//
//  Created by 신지식 on 2018. 10. 1..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;
int n, b;
vector<int> v, idx;
int main(){
    cin >> n >> b;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int even = 0, odd = 0;
    for(int i = 0; i < n-1; i++){
        if(v[i] % 2 == 0)
            even++;
        if(v[i] % 2 == 1)
            odd++;
        
        if(even == odd)
            idx.push_back(abs(v[i+1] - v[i]));
    }
    int count = 0;
    
    sort(idx.begin(), idx.end());

    int sum = 0;
    
    for(int i = 0; i < idx.size(); i++){
        if(sum + idx[i] <= b){
            sum += idx[i];
            count++;
        }
    }
    printf("%d\n", count);
}
