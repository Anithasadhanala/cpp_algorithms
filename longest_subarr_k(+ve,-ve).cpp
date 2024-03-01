#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  
  vector<int>v(n,0);
  for(int i=0;i<n;i++) cin>>v[i];
  
  map<int,int>m;
  int sum=0;
  int ma =0;
  for(int i=0;i<n;i++){
      sum+=v[i];
      if(sum==k) ma = i+1;
      if(m.find(sum-k)!=m.end()) ma= max(ma, (i - m[sum-k]));
      if(m.find(sum)==m.end()) m[sum]=i;
  }
    
  if(ma!=0) cout<<ma;
  else cout<<0;
  
  return 0;
}
