#include <iostream>

using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
if(a[i]<=10)
cout<<"A["<<i<<"] = "<<a[i]<<'\n';


}

 


}