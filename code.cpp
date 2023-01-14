



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b,x,t,d,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=min(a,b);
        d=max(a,b);
        if(a==b)
            cout<<a<<endl;
        else if(c==1)
        {
          cout<<(d*2)-1<<endl;
        }
        else{


        x=a*b-a-b;
        cout<<x<<endl;
        }
    }
    return 0;
}
