#include<bits/stdc++.h>
#define ll long long int
                      
using namespace std;
void solve()
{
    ll y,x;
    cin>>y>>x;
    ll ans;
    if(y>x)
    {
      if(y%2==0)
      {
        ans=(y*y)-(x-1);
      }
      else{
        ans=(y-1)*(y-1)+x;
      }
    }
    else{
      if(x%2==0)
      {
        ans=(x-1)*(x-1)+y;
      }
      else{
        ans=(x*x)-(y-1);
      }
    }
    cout<<ans<<endl;

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}