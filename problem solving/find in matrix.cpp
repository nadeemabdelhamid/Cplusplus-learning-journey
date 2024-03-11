#include <iostream>

using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int m,n,x;
bool check=false;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++) 
for(int j=0;j<m;j++)
cin>>a[i][j];
cin>>x;
for(int i=0;i<n;i++) 
for(int j=0;j<m;j++)
if(x==a[i][j]){
   check=true;
    break;
 


}
if (check)
cout<<"YES";
else
cout<<"NO";}