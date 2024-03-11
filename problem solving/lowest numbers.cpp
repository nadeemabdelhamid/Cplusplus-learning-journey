#include <iostream>

using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
int a[n],min;
for(int i=0;i<n;i++)
cin>>a[i];
min=0;
for(int i=1;i<n;i++)
if(a[i]<a[min])
min=i;
 
cout<<a[min]<<" "<<min+1;

}