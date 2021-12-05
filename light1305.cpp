#include<bits/stdc++.h>
using namespace std;
typedef double dl;
#define PI 3.1416
int main()
{
    int t,e=1;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,cx,cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        int dx=ax+cx-bx , dy=ay+cy-by;
        /*dl ab=sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by)),
            bc=sqrt((bx-cx)*(bx-cx) + (by-cy)*(by-cy)),
            ac=sqrt((ax-cx)*(ax-cx) + (ay-cy)*(ay-cy));
        dl s=(ab+bc+ac)/2.0;*/
        int area=(int)fabs((double)(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by)));
        if(area<0)
            area=area*-1;
        cout<<"Case "<<e++<<": "<<dx<<" "<<dy<<" "<<area<<'\n';
    }
    return 0;
}
