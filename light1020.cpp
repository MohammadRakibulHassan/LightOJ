#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int t=1;
    while(tc--){
        int tot,trgt;
        string strtplyr,win="",opnnt;
        cin>>tot>>strtplyr;
        if(strtplyr=="Alice"){
            opnnt="Bob";
            trgt=tot-1;
        }
        else{
	    strtplyr="Bob";
            opnnt="Alice";
            trgt=tot;
        }
        while(trgt>-1)
            trgt=trgt-3;
        trgt=trgt+3;
        if(trgt==1 || trgt==2)
            win=strtplyr;
        if(trgt==0)
            win=opnnt;
        cout<<"Case "<<t++<<":"<<win<<"\n";
    }
    return 0;
}
