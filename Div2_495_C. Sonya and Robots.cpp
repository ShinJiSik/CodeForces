//
//  main.cpp
//  Div2_495_C. Sonya and Robots
//
//  Created by 신지식 on 2018. 9. 13..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;
set<pair<int, int>> s;
int check[100001];
int main(int argc, const char * argv[]) {
    int n;
    int arr[100001];

    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    
    
    int k = 0;
    while(k < n){
        for(int i = k+1; i < n; i++)
            s.insert(make_pair(arr[k], arr[i]));
        
        k++;
    }
    int ans = s.size();

    printf("%d\n", ans);
}
