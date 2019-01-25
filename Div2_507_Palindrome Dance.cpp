//
//  main.cpp
//  Div2_507_Palindrome Dance
//
//  Created by 신지식 on 2018. 9. 6..
//  Copyright © 2018년 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, w, b;
    vector<int> p;
    
    cin >> n >> w >> b;
    for(int i = 0; i < n; i++){
        int f;
        cin >> f;
        p.push_back(f);
    }
    
    int left = 0, right = n-1;
    
    int min = 0;
    int min2 = 0;
    
    if(w > b)
        min2 = b;
    else
        min2 = w;
    
    int check = 0;
    while(1){

        if(left == right){
            min += min2;
            break;
        }
        if(p[left] != p[right]){
            check = 1;

            if(p[left] == 2){
                if(p[right] == 0)
                    min += w;
                else
                    min += b;
            }
            else if(p[right] == 2){
                if(p[left] == 0)
                    min += w;
                else
                    min += b;
            }
            else if(p[left] == 0){
                if(p[right] == 1)
                    check = 3;
                if(w > b){
                    min += b;
                }
            }
            else if(p[left] == 1){
                if(p[right] == 0)
                    check = 3;
                if(w > b){
                    min += b;
                }
            }
        }
      
        left++;
        right--;
    }
    
    if(check == 0)
        min = 0;
    if(check == 3)
        min = -1;
    printf("%d\n", min);
}
