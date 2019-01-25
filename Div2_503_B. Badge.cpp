//
//  main.cpp
//  Div2_503_B. Badge
//
//  Created by 신지식 on 2018. 9. 10..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[1001];
int check[1001];
int n, ans = -1;

void dfs(int x){
    check[x]++;
    if(check[x] == 2){
        ans = x;
        return;
    }
    if(ans == -1)
        dfs(arr[x]);
}

int main(){
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            check[j] = 0;
        ans = -1;
        dfs(i);
        printf("%d ", ans);
    }
    printf("\n");
}
