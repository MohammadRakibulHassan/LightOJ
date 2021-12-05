#include<bits/stdc++.h>///WA
#include<cmath>
using namespace std;
typedef long long ll;
long long funfloor(long long x)
{
    double n=(double) x;
    n=floor(x);
    return (long long) n;
}
long long funceil(long long x)
{
    double n=(double) x;
    n=ceil(x);
    return (long long) n;
}
int main()
{
    int t,r=1;
    scanf("%d",&t);
    while(t--){
        ll m,n,ans,mx,temp,temp1;

        scanf("%lld %lld",&m,&n);
        if(m==1 || n==1)
            ans=max(m,n);
        else if(m==2 || n==2){
            mx=max(m,n);
            temp=(mx/2)+1;
            ans=temp*2;
        }
        else{
            if(m*n % 2 == 0)
                ans=(m*n)/2;
            else {
                temp=funfloor(m/2)*funfloor(n/2);
                temp1=funceil((m/2)+1)*funceil((n/2+1));
                ans=temp+temp1;
            }
        }
        cout<<"Case "<<r++<<": "<<ans<<"\n";
    }
    return 0;
}///my
