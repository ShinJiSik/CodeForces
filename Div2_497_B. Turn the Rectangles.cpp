//
//  main.cpp
//  Div2_497_B. Turn the Rectangles
//
//  Created by 신지식 on 2018. 9. 20..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    int m = INT_MAX;
    int check = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x > m && y > m)
            check = 1;
        
        if(x < y) swap(x, y);
        if(x > m) m = y;
        else m = x;
    }
    
    if(check == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
