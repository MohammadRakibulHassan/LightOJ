#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        int s,n=0,y=0,ro=1,col=1,temp=0;
        cin>>s;
        n=ceil(sqrt(s));
        if(n%2==0){
            y=s-(n-1)*(n-1);
            if(y<=n){
                ro=y;col=n;
            }
            else{
                col=n*n - s + 1;ro=n;
            }
            ///temp=ro;ro=col;col=temp;
        }
        else{
            y=s-(n-1)*(n-1);
            if(y>n){
                col=n;
                ro=n*n - s +1;
            }
            else if(y<=n){
                ro=n;
                col=y;
            }

        }
        cout<<"Case "<<e++<<": "<<ro<<" "<<col<<"\n";
    }
    return 0;
}
/*int mySqrt(int x)
{
    int res=sqrt(x);
    return res;
}
int main()
{
    int tc,x,r=1,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        x=ceil(mySqrt(n));
        int row,col,y;
        if(x % 2 == 1){
            y=n-(x-1)*(x-1);
            if(x < y){
                row=y;
                col=x;
            }
            else{
                row=x;
                col=1 + x*x - n;
            }
        }
        else{

        }
        cout<<"Case "<<r++<<": "<<row<<" "<<col<<"\n";
    }
    return 0;
}

long long tc, num, t = 1, a, b;
    cin>>tc;
    while (tc--){
        long long num;
        cin>>num;
        long long sqt = ceil(sqrt(num));
        long long extnum = sqt*sqt - num;
        long long row = 0, col = 0;

        if(extnum < sqt){
            row = extnum + 1;
            col = sqt;
        }
        else{
            row = sqt;
            col = num - (sqt - 1) * (sqt - 1);
        }

        if(sqt % 2 == 0) swap(row, col);

        cout << "Case " << t++ << ": ";
        cout << row << " " << col << endl;
    }
*/
