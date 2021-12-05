#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int  main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        double r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        r1=r2+((r1-r2)*p/h);
        cout<<"Case "<<e++<<": "<<setprecision(7)<<fixed<<PI/3.0*p*(r1*r1 + r1*r2 + r2*r2)<<'\n';
    }
    return 0;
}
