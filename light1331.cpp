#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        double r1,r2,r3;
        cin>>r1>>r2>>r3;

        double _c=r1+r2;
        double _a=r2+r3;
        double _b=r1+r3;
        double A=acos((_b*_b+_c*_c-_a*_a)/(2*_b*_c));
        double B=acos((_a*_a+_c*_c-_b*_b)/(2*_a*_c));
        double C=acos((_a*_a+_b*_b-_c*_c)/(2*_a*_b));
        double s1=0.5*r1*r1*A , s2=0.5*r2*r2*B , s3=0.5*r3*r3*C;
        double S=s1 + s2 + s3;
        double av=(_a+_b+_c)/2.0;
        long double ans=sqrt(av*(av-_a)*(av-_b)*(av-_c)) - S;
        ///printf("Case %d: %.10lf\n",e++,ans);
        cout<<"Case "<<e++<<": "<<setprecision(8)<<fixed<<ans<<"\n";
    }
    return 0;
}
