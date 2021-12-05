#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int m,i=0;
        cin>>m;
        int x[m],y[m];
        cout<<"Case "<<e++<<": \n";
        while(m--){
            cin>>x[i]>>y[i];
            if(x[i]<x1 || x[i]>x2 || y[i]<y1 || y[i]>y2)
                cout<<"No\n";
            else
                cout<<"Yes\n";
            i++;
        }
    }
}
