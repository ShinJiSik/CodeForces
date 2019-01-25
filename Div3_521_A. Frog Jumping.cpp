//
//  main.cpp
//  Div3_521_A. Frog Jumping
//
//  Created by 신지식 on 17/11/2018.
//  Copyright © 2018 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;
int t;
long long a, b, n, ans;
int main(int argc, const char * argv[]) {
    cin >> t;
    ans = 0;
    while(t--){
        cin >> a >> b >> n;
        ans = 0;
        long long mul = n - (n/2);
        
        ans = (mul*a) - ((n-mul)*b);
        
        cout << ans << "\n";
    }
}
