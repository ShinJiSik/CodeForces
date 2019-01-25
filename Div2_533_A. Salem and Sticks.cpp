//
//  main.cpp
//  Div2_533_A. Salem and Sticks
//
//  Created by 신지식 on 20/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int cow[1017], n, t, pig = 0, ans = 1e9+17;

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", &cow[i]);
    for(int i = 1; i <= 100; i++)
    {
        pig = 0;
        for(int j = 1; j <= n; j++)
        {
            if(abs(cow[j]-i) <= 1)
                continue;
            pig += min(abs(cow[j]-i+1), abs(cow[j]-i-1));
        }
        if(pig < ans)
        {
            ans = pig;
            t = i;
        }
    }
    printf("%d %d\n", t, ans);
    return 0;
}
