#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i, n,d,num, f,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        f=0;
        s=0;
        //vector<int>v;
        num=n;
        while(num!=0)
        {
            d=num%10;
            if(d==4)
            {
                s=s+pow(10,f);
                //v.push_back(f);
            }
            f++;
            num/=10;
        }
        /*for(num=0;num<f;num++)
            s+=pow(10,v[num]);*/
        cout<<"Case #"<<i<<": "<<s<<" "<<n-s<<endl;
    }
    return 0;
}
