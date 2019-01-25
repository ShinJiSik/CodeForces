ㅈ//
//  main.cpp
//  Div3_521_C. Good Array
//
//  Created by 신지식 on 17/11/2018.
//  Copyright © 2018 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int arr[2000001];
bool check[2000001];
vector<int> v, a, re;

void dfs(int cnt){
    if(cnt == n-1){
        
        int diff = a[cnt];
        int sum = 0;
        for(int i = 0; i < cnt-1; i++){
            sum += a[i];
        }
        if(diff == sum){
            for(int i = 0; i < a.size(); i++){
                arr[a[i]]++;
                if(arr[a[i]] == 2){
                    arr[a[i]] = 0;
                    arr[a[i] + a[i]]++;
                }
            }
            for(int i = 0; i < 2000000; i++){
                if(arr[i] > 0)
                    re.push_back(i);
            }
            printf("%d\n", (int)re.size());

            for(int i = 0; i < re.size(); i++)
                printf("%d ", re[i]);
            printf("\n");
            exit(0);

            return;
        }
        
        /*
        for(int i = 0; i < a.size(); i++)
            printf("%d ", a[i]);
        printf("\n");
        return;*/
    }
    //if(cnt >= a.size() || cnt >= v.size()) return;

    for(int i = 0; i < v.size(); i++){
        if(check[i] == false){
            a.push_back(v[i]);
            check[i] = true;
            dfs(cnt + 1);
            a.pop_back();
            check[i] = false;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    dfs(0);
    printf("0\n");

}
