#include<bits/stdc++.h>
#define ll long long int
                      
using namespace std;
void solve()
{
 string s;
 cin>>s;
 int n=s.length();
 int cnt=0,maxm=0;
 int st=0,end=0;
 for(int i=0;i<n-1;i++)
 {
  if(s[i]==s[i+1])
  {
    end=i+1;
  }
  else
  {
    maxm=max(maxm,end-st+1);
    st=i+1;
  }
 }
 cout<<max(maxm,end-st+1)<<"\n";
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  solve();
  return 0;
}