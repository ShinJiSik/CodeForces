//
//  main.cpp
//  Div2_495_A. Sonya and Hotels
//
//  Created by 신지식 on 2018. 9. 13..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n, d;
    int arr[101];
    
    cin >> n >> d;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int ans = 2;
    for(int i = 1; i < n; i++){
        int dist = arr[i] - arr[i-1];
        if(dist - (2 * d) > 0)
            ans += 2;
        else if(2 * d == dist)
            ans += 1;
    }
    printf("%d\n", ans);
}
