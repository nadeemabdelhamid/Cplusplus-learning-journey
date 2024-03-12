#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int m,n,cnt=0;
cin>>m>>n;
int a[m];
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=1;i<=n;i++){
for(int j=0;j<m;j++){
if(a[j]==i) 

cnt++;




}
cout<<cnt<<'\n';
cnt=0;


}



}

