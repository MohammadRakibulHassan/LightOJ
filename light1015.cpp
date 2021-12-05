#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int t=1;

    while(tc--){
        int a[1001],n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long an=0;
        for(int j=0;j<n;j++){
            if(a[j]<0)  continue;
            an+=a[j];
        }
        cout<<"Case "<<t++<<": "<<an<<'\n';
    }
    return 0;
}
