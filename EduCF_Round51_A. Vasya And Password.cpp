//
//  main.cpp
//  EduCF_Round51_A. Vasya And Password
//
//  Created by 신지식 on 2018. 9. 20..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        int len = s.length();
        int up = 0;
        int down = 0;
        int digit = 0;
        
        int arr[101];
        for(int i = 0; i < len; i++){
            for(int j = 'A'; j < 'Z'; j++){
                if(s[i] == j){
                    up++;
                    arr[i] = 1;
                }
            }
            for(int j = 'a'; j < 'z'; j++){
                if(s[i] == j){
                    down++;
                    arr[i] = 2;
                }
            }
            for(int j = '0'; j <= '9'; j++){
                if(s[i] == j){
                    digit++;
                    arr[i] = 3;
                }
            }
        }
        
        if(up > 0 && down > 0 && digit > 0)
            cout << s << "\n";
        else{
            if(up == 0){
                if(down >= 2){
                    for(int i = 0; i < len; i++){
                        if(arr[i] == 2){
                            s[i] = 'A';
                            arr[i] = 1;
                            break;
                        }
                    }
                }
                if(down < 2 && digit >= 2){
                    for(int i = 0; i < len; i++){
                        if(arr[i] == 3){
                            s[i] = 'A';
                            arr[i] = 1;
                            break;
                        }
                    }
                }
            }
            if(down == 0){
                if(up >= 2){
                    for(int i = 0; i < len; i++){
                        if(arr[i] == 2){
                            s[i] = 'a';
                            arr[i] = 2;
                            break;
                        }
                    }
                }
                if(up < 2 && digit >= 2){
                    for(int i = 0; i < len; i++){
                        if(arr[i] == 3){
                            s[i] = 'a';
                            arr[i] = 2;
                            break;
                        }
                    }
                }
            }
            if(digit == 0){
                if(down >= 2){
                    for(int i = 0; i < len; i++){
                        if(arr[i] == 2){
                            s[i] = '4';
                            arr[i] = 2;
                            break;
                        }
                    }
                }
                if(down < 2 && up >= 2){
                    for(int i = 0; i < len; i++){
                        if(arr[i] == 3){
                            s[i] = '4';
                            arr[i] = 1;
                            break;
                        }
                    }
                }
            }
            cout << s << "\n";
        }
    }
}
