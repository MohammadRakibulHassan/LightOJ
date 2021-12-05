#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a=1;
    cin>>t;
    while(t--){
        double v1,v2,v3,a1,a2,x,t1,t2,s1,s2;
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        s1=(v1*t1)-(.5*a1*t1*t1);
        s2=(v2*t2)-(.5*a2*t2*t2);
        double d=s1+s2;
        t1=max(t1,t2);
        double pigeo=t1*v3;
        cout<<"Case "<<a++<<": "<<setprecision(8)<<fixed<<d<<" "<<pigeo<<'\n';
    }
    return 0;
}
