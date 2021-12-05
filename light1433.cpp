#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        int ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double s;
        double oa=sqrt((ox-ax)*(ox-ax) + (oy-ay)*(oy-ay));
        double ob= sqrt((ox-bx)*(ox-bx) + (oy-by)*(oy-by));
        double ab= sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
        double theta=acos((oa*oa + ob*ob - ab*ab)/(2*oa*ob));
        s=oa*theta;
        cout<<"Case "<<e++<<": "<<setprecision(6)<<fixed<<s<<'\n';
    }
    return 0;
}
