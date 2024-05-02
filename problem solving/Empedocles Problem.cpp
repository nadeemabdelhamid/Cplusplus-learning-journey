#include<bits/stdc++.h>
using namespace std;
   bool compare(vector &a, vector &b)  
{  
    for (int i = 0; i < a.size(); i++)    
        if (a[i] != b[i]) return false;    
    return true;    
}  

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
   vector<vector<string>> v(n,vector<string>(4));
   for(inti=0;i<n;i++)
   for(int j=0;j<4;j++) 
   cin>>v[i][j];
   


   
}