//
//  main.cpp
//  Div2_491_A. If at first you don't succeed...
//
//  Created by 신지식 on 2018. 9. 6..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    int a, b, c, n;
    
    cin >> a >> b >> c >> n;

    int x = a - c;
    int y = b - c;
    if(x + y + c < n && x >= 0 && y >= 0){
            printf("%d\n", n - x - y - c);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
