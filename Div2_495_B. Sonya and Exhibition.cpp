//
//  main.cpp
//  Div2_495_B. Sonya and Exhibition
//
//  Created by 신지식 on 2018. 9. 13..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n, m, r, l;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++)
        cin >> r >> l;

    for(int i = 0; i < n; i++){
        printf("%d", i%2);
    }
    printf("\n");
}
