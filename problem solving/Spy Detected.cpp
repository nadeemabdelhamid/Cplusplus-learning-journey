#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q,n;
    
    cin>>q;
    while (q--) {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
if(a[0]!=a[1]&&a[0]!=a[2])
cout<<1;
for(int i=1;i<n-1;i++)
if(a[i]!=a[i+1]&&a[i]!=a[i-1])
cout<<i+1;
if(a[n-1]!=a[n-2]&&a[n-1]!=a[n-3])
cout<<n;
cout<<'\n';

    }

}
