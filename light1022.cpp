#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        double r;
        cin>>r;
        cout<<"Case "<<e++<<": "<<setprecision(2)<<fixed<<(4.0*r*r) - (PI*r*r) + 1e-9<<'\n';
    }
    return 0;
}
