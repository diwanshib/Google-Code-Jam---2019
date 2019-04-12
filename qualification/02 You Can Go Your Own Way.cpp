#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, ii, i;
    cin>>t;
    for(ii=0;ii<t;ii++)
    {
        cin>>n;
        char p[2*n-2];
        string s="";
        for(i=0;i<2*n-2;i++)
        {
            cin>>p[i];
            if(p[i]=='S')
                s+="E";
            else
                s+="S";
        }
        cout<<"Case #"<<ii+1<<": "<<s<<endl;
    }
    return 0;
}
