#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        int n, arx1 , ary1 , arz1 , arx2 , ary2 , arz2;
        int ax1=-MAX, ax2=MAX, ay1=-MAX, ay2=MAX, az1=-MAX, az2=MAX , ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arx1>>ary1>>arz1;
            cin>>arx2>>ary2>>arz2;
            ax1=max(arx1 , ax1);
            ax2=min(arx2 , ax2);
            ay1=max(ary1 , ay1);
            ay2=min(ary2 , ay2);
            az1=max(arz1 , az1);
            az2=min(arz2 , az2);
        }
        if(ax2>ax1 && ay2>ay1 && az2>az1){
            ans=(ax2-ax1)*(ay2-ay1)*(az2-az1);
        }
        else
            ans=0;
        cout<<"Case "<<e++<<": "<<ans<<'\n';
    }
    return 0;
}
