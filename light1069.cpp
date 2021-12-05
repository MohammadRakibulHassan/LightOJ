#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=1;
    cin>>n;
    while(n--){
        int me,lif,ext=0;
        cin>>me>>lif;
        if(me>lif){
            cout<<"Case "<<t++<<": "<<19+((me-lif)+me)*4<<'\n';
        }
        else
            cout<<"Case "<<t++<<": "<<19+(lif*4)<<'\n';
    }
    return 0;
}
