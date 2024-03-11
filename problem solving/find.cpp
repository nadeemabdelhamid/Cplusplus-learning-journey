#include <iostream>
using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int n,x;
bool check=false;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
if(a[i]==x){
cout<<i<<'\n';
check=true;
break;
}

    
}

if(!check)
cout<<"Not Found\n";




}