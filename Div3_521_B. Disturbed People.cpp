//
//  main.cpp
//  Div3_521_B. Disturbed People
//
//  Created by 신지식 on 17/11/2018.
//  Copyright © 2018 Shin Ji Sik. All rights reserved.
//

#include <iostream>

using namespace std;
int n;
int arr[101];

void dfs(int x){
    
}
int main(int argc, const char * argv[]) {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 1; i < n-1; i++){
        
        if(arr[i-1] == 1 && arr[i+1] == 1 && arr[i] == 0){
            dfs(i);
        }
    }
}

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i + 2 < n; ++i) {
        if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1) {
            a[i + 2] = 0;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
