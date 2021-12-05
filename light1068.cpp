#include<iostream>
using namespace std;
int sumof(long long x)
{
    int ret=0;
    long long q=x;
    while(q!=0){
        ret = ret + (q%10);
        q=q/10;
    }
    return ret;
}
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        long long a,b;
        int k,cunt=0;
        cin>>a>>b>>k;
        for(long long i=a;i<=b;i++){
            if(i%k==0 && (sumof(i)%k==0))
                cunt++;
            else
                ;

        }
        cout<<"Case "<<e++<<": "<<cunt<<"\n";
    }
    return 0;
}
