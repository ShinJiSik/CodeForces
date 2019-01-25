//
//  main.cpp
//  Div2_499_B. Planning The Expedition
//
//  Created by 신지식 on 2018. 9. 19..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, m;
    int arr[101];
    int food[101] = {0, };
    
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> arr[i];
        food[arr[i]]++;
    }
    
    for(int i = 100; i >= 1; i--){
        int day = 0;
        for(int j = 1; j <= 100; j++){
            day += food[j] / i;
        }
        
        if(day >= n){
            printf("%d\n", i);
            return 0;
        }
    }
    
    printf("0\n");
}
