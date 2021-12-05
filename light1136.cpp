#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        ll a,b,ans=0,temp=0;
        cin>>a>>b;
        ans=(b/3)*2;
        if(b%3==2)
            ans++;
        temp=((a-1)/3)*2;
        if((a-1)%3==2)
            temp++;
        cout<<"Case "<<e++<<": "<<ans-temp<<'\n';
    }
    return 0;
}
