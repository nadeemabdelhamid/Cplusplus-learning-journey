#include <iostream>
#include<algorithm>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) 
        cin>>a[i];
sort(a,a+n);
for(int i=0;i<n/2;i++)
cout<<a[i]<<' ';
reverse(a,a+n/2);
for(int i=0;i<n/2;i++)
cout<<a[i]<<' ';
cout<<'\n';
reverse(a+n/2,a+n);
for(int i=n/2;i<n;i++)
cout<<a[i]<<' ';
reverse(a+n/2,a+n);
for(int i=n/2;i<n;i++)
cout<<a[i]<<' ';

    
}