//
//  main.cpp
//  Div2_497_A. Romaji
//
//  Created by 신지식 on 2018. 9. 20..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    cin >> s;
    
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'n'){}
        else{
            if(i + 1 == len || (!(s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u'))){
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
}
