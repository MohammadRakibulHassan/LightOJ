#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        double R,r,n;

        cin>>R>>n;
        double ang=PI/n;
        r=(R*(sin(ang)))  /  (1+(sin(ang)));
        cout<<"Case "<<e++<<": "<<setprecision(10)<<fixed<<r<<'\n';
    }
    return 0;
}
