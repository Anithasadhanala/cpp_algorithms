#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int m,n; cin>>m>>n;
    vector<vector<int>>v;
    vector<int>r,c;
    for(int i=0;i<m;i++){
        vector<int>v2(n,0);
        for(int j=0;j<n;j++){
             cin>>v2[j];
             if(v2[j]==1){
                  r.push_back(i);
                  c.push_back(j);
             }
        }
        v.push_back(v2);
    }
    sort(r.begin(),r.end());
    sort(c.begin(),c.end());
    
    int rmid = 0,cmid=0;
    int rs=r.size();
    if(rs%2){
        rmid = r[rs/2];
        cmid = c[rs/2];
    }
    else{
        rmid = (r[rs/2] + r[(rs/2)-1] ) / 2;
        cmid = (c[rs/2] + c[(rs/2)-1]) / 2;
    }
    
    int dis = 0;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==1){
                dis += abs(i-rmid) + abs(j-cmid);
            }
        }
    }
    cout<<dis;
    
    
    
    
    return 0;
}
