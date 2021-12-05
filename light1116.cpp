#include<stdio.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    int t,e=1;
    scanf("%d",&t);
    while(t--){
        ull w,i,ev,od;
        scanf("%lld",&w);
        ///printf("Case %d: ",e++);
        if(w%2==0){
            ull temp=1;
            while(w%2==0){
                temp*=2;
                w/=2;
            }
            printf("Case %d: %lld %lld\n" , e++ , w , temp);
        }
        else
            printf("Case %d: Impossible\n",e++);
    }
    return 0;
}
