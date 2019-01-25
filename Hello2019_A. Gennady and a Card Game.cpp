//
//  main.cpp
//  Hello2019_A. Gennady and a Card Game
//
//  Created by 신지식 on 05/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string table;
    string card[5];
    
    cin >> table;
    int check = 0;
    for(int i = 0; i < 5; i++){
        cin >> card[i];
        if(table[0] == card[i][0])
            check = 1;
        else if(table[1] == card[i][1])
            check = 1;
    }
    if(check == 1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
    
}
