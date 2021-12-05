#include<bits/stdc++.h>///AC
using namespace std;
typedef long long ll;
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    ll row, col, tc, t = 1;
    sc1(tc);
    while (tc--){
        sc2(row, col);
        cout << "Case " << t++ << ": " ;
        ll ans = row * col;
        if(row == 1 || col == 1){
            cout << max(row, col) << endl;
        }
        else if(row == 2 || col == 2){
            ll big = max(row, col);
            ans = big;
            if(big % 4 == 1 || big % 4 == 3)
                ans++;
            if(big % 4 == 2 )
                ans+=2;
            cout << ans << endl;
        }
        else if(ans %2 == 1){
            cout << ans/2 + 1 << endl;
        }
        else
            cout << ans/2 << endl;
    }
    return 0;
}
#include <stdio.h>///AC
int main()
{
    int tst, i;
    int m , n, mn, ans, x;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++){
        scanf("%d%d", &m, &n);
        mn = m * n;
        if(m==1 || n==1)    ans = mn;
        else if(m==2 || n==2){
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else ans = (mn/2)+1;
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
