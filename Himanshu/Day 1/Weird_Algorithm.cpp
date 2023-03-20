#include<bits/stdc++.h>
#define ll long long int
                      
using namespace std;
void solve()
{
  ll n;
  cin>>n;
  while(n!=1)
  {
    cout<<n<<" ";
    if(n%2==0)
    {
      n/=2;
    }
    else
    {
      n*=3;
      n++;
    }
  }
  cout<<n<<'\n';
  
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  solve();
  return 0;
}