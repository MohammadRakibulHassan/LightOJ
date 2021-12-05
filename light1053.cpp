#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        double a[3];
        string ans="";
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);///sort in inreasing order
        if(a[2]*a[2]==(a[0]*a[0] + a[1]*a[1]))
            ans="yes";
        else
            ans="no";
        cout<<"Case "<<e++<<": "<<ans<<"\n";
    }
    return 0;
}
