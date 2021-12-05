#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        ll n,m,ans=0;
        cin>>n>>m;
        ans=m*n/2;
        cout<<"Case "<<e++<<": "<<ans<<'\n';
    }
    return 0;
}
