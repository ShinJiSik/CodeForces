//
//  main.cpp
//  Div2_499_A. Stages
//
//  Created by 신지식 on 2018. 9. 19..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;
    
    stack<char> c;
    int len = s.length();
    
    sort(s.begin(), s.end());
    int cnt = 0;
    
    for(int i = 0; i < len; i++){
        if(cnt == k)
            break;
        
        if(c.empty()){
            c.push(s[i]);
            cnt++;
        }
        
        if(s[i] - c.top() > 1){
            c.push(s[i]);
            cnt++;
        }
    }
    
    int min = 0;
    if(c.size() != k)
        printf("-1\n");
    else{
        while(!c.empty()){
            char tmp = c.top();
            c.pop();
            min += tmp - 96;
        }
        printf("%d\n", min);
    }
}
/*

int n, k, now, ans, num;
string s;
bool a[233];

int main()
{
    cin >> n >> k >> s;
    for (auto i : s) {
        a[i - 'a' + 1] = true;
    }
    now = -1;
    for (int i = 1; i <= 26; i++) {
        if (i > now + 1 && a[i]) {
            now = i;
            ans += i;
            num++;
        }
        if (num == k)break;
    }
    if (num == k)cout << ans;
    else cout << -1;
}

*/
