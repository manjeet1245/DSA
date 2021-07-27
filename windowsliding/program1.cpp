#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check(x)                cerr << #x << ": " << x << endl;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  int n,k,d;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int i=0,j=0;
  int sum=0,mm=INT_MIN;
  while(j<n)
  {
    sum+=arr[j];
    if(j-i+1<k)
    {
        j++;
    }
    else if(j-i+1==k)
    {
        d=max(mm,sum);
        sum-=arr[i];
        i++;
        j++;
    }

  }
  cout<<d;
   
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}