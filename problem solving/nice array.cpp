#include <iostream>
using namespace std;
   bool checkk(int a[],int n){
bool visited[100000]={false};
for(int i=0;i<n;i++){
if(visited [a[i]])
return false;
visited[a[i]]=true;

}

return true;


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,q;
cin>>q;
while(q--){
cin>>n;
int x[n];

for(int i=0;i<n;i++)
cin>>x[i];

if(checkk(x,n))
cout<<"YES";
else
cout<<"NO";
}


    
}