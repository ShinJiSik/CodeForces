//
//  main.cpp
//  Div2_510_A. Benches
//
//  Created by 신지식 on 2018. 9. 18..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    
    int n, m;
    int arr[110];
    
    cin >> n >> m;
    int sum = m;
    int max = 0;
    float min = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    
    max += m;
    sort(arr, arr + n);

    min = ceil((float)sum/n);
    if(arr[n - 1] > min)
        min = arr[n - 1];

    
    printf("%d %d\n", (int)min, max);
}
