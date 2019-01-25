//
//  main.cpp
//  Div531_B. Array K-Coloring
//
//  Created by 신지식 on 09/01/2019.
//  Copyright © 2019 Shin Ji Sik. All rights reserved.
//

#include <iostream>

using namespace std;
int n, k;

int main(int argc, const char * argv[]) {
    cin >> n >> k;
    
    int arr[5003] = {0, };
    int c[5003] = {0, };
    int ans[5003] = {0, };
    bool check = false;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        c[arr[i]]++;
    }
    
    for(int i = 1; i < 5003; i++){
        if(c[i] > k){
            check = true;
            break;
        }
    }
    
    for(int i = 1; i < 5003; i++){
        for(int j = 1; j < 5003; j++){
            if(arr[i] == j){
                ans[i] = c[j];
                c[j]--;
            }
        }
    }
    
    if(check == true)
        cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}
/*

#include<bits/stdc++.h>

using namespace std;
int n,k,a[5005],ok[5005],max_,bd[5005],sd[5005],f[5005];

main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ok[a[i]]++;
        max_=max(max_,ok[a[i]]);
    }
    if(max_>k) cout<<"NO";
    else
    {
        cout<<"YES"<<'\n';
        for(int i=1;i<=n;i++)
        {
            sd[i]=bd[a[i]]+1;
            f[bd[a[i]]+1]++;
            bd[a[i]]++;
        }
        long long luu=k+1;
        for(int i=1;i<=k;i++)
        {
            if(f[i]==0)
            {
                luu=i;
                break;
            }
        }
        //cout<<luu<<'\n';
        long long x=luu;
        long long i=1;
        while(i!=n+1&&x!=k+1)
        {
            if(f[sd[i]]!=1)
            {
                f[sd[i]]--;
                sd[i]=x;
                x++;
            }
            i++;
        }
        for(int i=1;i<=n;i++) cout<<sd[i]<<" ";
    }
    
    
}


int n, k;
cin >> n >> k;
vector<pair<int, int> > b;
for (int i = 0; i < n; ++i) {
    cin >> a[i];
    b.push_back({a[i], i});
    cnt[a[i]]++;
    if (cnt[a[i]] > k) {
        cout << "NO";
        return 0;
        }
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < n; ++i) {
            ans[b[i].se] = (i % k) + 1;
        }
        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << ' ';
        }
        return 0;
    }


        using namespace std;
        int main(){
            int n,k;
            cin >> n >> k;
            int p[n];
            vector <int> v[5001];
            for(int i = 0;i < n;i++){
                cin >> p[i];
                v[p[i]].push_back(i);
            }
            int d = 0,q[n];
            for(int i = 0;i < 5001;i++){
                if(v[i].size() > k){cout << "NO" << endl;return 0;}
                for(int j = 0;j < v[i].size();j++){
                    int g = v[i][j];
                    q[g] = d+1;
                    d = (d+1) % k;
                }
            }
            cout << "YES" << endl;
            for(int i = 0;i < n;i++)cout << q[i] << " ";
            cout << endl;
            return 0;
        }



        using namespace std;
        
        const int maxn = 5e3 + 10;
        int num[maxn];
        int vis[maxn];
        int a[maxn];
        int ans[maxn];
        
        int main(){
            int n,k;
            cin >> n >> k;
            bool check = true;
            int t = 0;
            for(int i = 1; i <=n; ++i){
                cin >> a[i];
                num[a[i]]++;
                if(num[a[i]] > k) check = false;
            }
            if(!check){
                puts("NO");
                return 0;
            }
            t = 1;
            puts("YES");
            for(int i = 1; i <= n; ++i)if(!vis[a[i]]){
                ans[i] = t++;
                vis[a[i]] = 1;
                if(t > k) t = 1;
                for(int j = i+1; j <= n; ++j)
                    if(a[i] == a[j]){
                        ans[j] = t++;
                        if(t > k) t = 1;
                    }
            }for(int i = 1; i <= n; ++i)
                printf("%d ", ans[i]);
            return 0;
        }


        using namespace std;
        const int N=5010;
        int n,k,a[N],c[N],mx=0,s[N],m[N];
        int main(){
            scanf("%d%d",&n,&k);
            for(int i=1;i<=n;i++)
                scanf("%d",&a[i]);
            for(int i=1;i<=n;i++){
                c[i]=++s[a[i]];
                m[i]=max(m[i-1],c[i]);
            }
            if(m[n]>k){
                printf("NO");
                return 0;
            }
            printf("YES\n");
            for(int i=n;k>m[i];k--,i--){
                c[i]=k;
            }
            for(int i=1;i<=n;i++){
                printf("%d ",c[i]);
            }
        }
*/

/*

using namespace std;

int N, k;
int arr[5004], cnt[5004], val[5004];

int main(){
    scanf("%d %d", &N, &k);
    for(int i=0;i<N;++i) scanf("%d", arr+i), ++cnt[arr[i]];
    for(int i=0;i<5004;++i) if(cnt[i]>k){
        puts("NO"); return 0;
    }
    val[0] = cnt[0];
    for(int i=1;i<5004;++i) val[i] = cnt[i]+val[i-1];
    for(int i=1;i<5004;++i) val[i] = val[i]-cnt[i]+1;
    puts("YES");
    for(int i=0;i<N;++i) printf("%d ", (val[arr[i]]++-1)%k+1);
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> list;
int num[10000] = { 0 };
int cnt[10000] = { 0 };
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n, k, input;
    cin >> n >> k;
    int maxi = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        list.push_back(input);
        num[input]++;
        if (maxi < num[input])
        {
            maxi = num[input];
            index = input;
        }
    }
    for (int i = 0; i < 5001; i++)
    {
        if (num[i] > k)
        {
            cout << "NO";
            return  0;
        }
    }
    cout << "YES\n";
    for (auto i : list)
    {
        if (k > maxi && index != i)
        {
            maxi++;
            cout << maxi << ' ';
        }
        else {
            cnt[i]++;
            cout << cnt[i] << ' ';
        }
    }
    return 0;
}
*/
