//
//  main.cpp
//  Div2_503_A. New Building for SIS
//
//  Created by 신지식 on 2018. 9. 10..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long n, h, a, b, k;
    
    cin >> n >> h >> a >> b >> k;
    
    for(int i = 0; i < k; i++){
        long long a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        long long near1 = abs(b1 - a1); //건물거리
        long long near2 = abs(b2 - a2); //층거리
        long long time = near1;
        
        if(near1 == 0)
            time += near2;
        else{
            if(a2 < a && b2 < a)
                time += ((a - a2) + (a - b2));
            else if(a2 > b && b2 > b)
                time += ((a2 - b) + (b2 - b));
            else
                time += near2;
        }
        
        cout << time << "\n";
    }
}
