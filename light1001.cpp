#include<iostream>
using namespace std;
int main()
{
    int x,ans,test;
    cin>>test;
    for(int i=1;i<=test;i++){
        cin>>x;

        if(x%2 == 0){
            ans=x/2;cout<<ans<<" "<<ans<<endl;
        }
        else{
            ans=x/2;cout<<ans<<" "<<ans+1<<endl;
        }
    }
    return 0;
}///AC
