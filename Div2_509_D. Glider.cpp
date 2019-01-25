//
//  main.cpp
//  Div2_509_D. Glider
//
//  Created by 신지식 on 2018. 9. 27..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;
long long n, h;
vector<long long> x, y;
int main(){
    cin >> n >> h;
    long long ans = h;
    for(int i = 1; i <= n; i++){
        long long a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
        ans = max(ans, y[i] - x[i] + h);
    }
    long long tmp = 0;
    long long y2 = h;
    for(int i = 1; i <= n; i++){
        if(x[i] - y[i-1] >= h)
            tmp = i;
        y2 += x[i] - y[i-1];
        y2 = min(y2, h);
        for(int j = tmp + 1; j<= n; j++){
            if(x[j] - y[j-1] >= y2){
                tmp = j - 1;
                break;
            }
            else{
                y2 -= x[j] - y[j-1];
                tmp = j;
            }
        }
        if(y[tmp] - x[i] + y2 > ans)
            ans = y[tmp] - x[i] + y2;
    }
    printf("%lld", ans);
}
