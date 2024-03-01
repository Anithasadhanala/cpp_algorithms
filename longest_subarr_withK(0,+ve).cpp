#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  
  vector<int>v(n,0);
  for(int i=0;i<n;i++) cin>>v[i];
  
  int sum=0,len=0,s=-1;
  for(int i=0;i<n;i++){
      sum+=v[i];
      while(s<=i && sum>k){
          s++;
          sum-=v[s];
      }
     
      if(sum==k) len = max(len,i-s);
  }
  cout<<len;
  
  return 0;
}
