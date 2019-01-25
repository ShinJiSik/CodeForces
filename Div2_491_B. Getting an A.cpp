//
//  main.cpp
//  Div2_491_B. Getting an A
//
//  Created by 신지식 on 2018. 9. 6..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    float arr[201];
    
    cin >> n;
    float sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    
    if(roundf(sum/n) == 5){
        printf("0\n");
    }
    else{
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != 5){
                sum += 5-arr[i];
                count++;
                if(roundf(sum/n) == 5){
                    printf("%d\n", count);
                    return 0;
                }
            }
        }
    }
}
