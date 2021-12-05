#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool par(ll x)
{
    if(x%2)
        return 1;
    else
        return 0;
}
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        ll r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        if(!(par(r1-r2) ==  par(c1-c2))){
            cout<<"Case "<<e++<<": "<<"impossible\n";
        }
        else{
            if(abs(r1-r2)==abs(c1-c2))
                cout<<"Case "<<e++<<": "<<1<<'\n';
            else
                cout<<"Case "<<e++<<": "<<2<<'\n';
        }
    }
}
