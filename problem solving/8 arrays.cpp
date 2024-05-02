#include<bits/stdc++.h>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
   cin>>n;
   vector<vector<float>> v(n,vector<float>(8));
 for(int i=0;i<n;i++)
 for(int j=0;j<8;j++){
   cin>>v[i][j];
  

   }
reverse(v.begin(),v.end());
 for(int i=0;i<n;i++){
 for(int j=0;j<8;j++)
    cout<<v[i][j]<<" ";
    cout<<endl;

 }
 
}