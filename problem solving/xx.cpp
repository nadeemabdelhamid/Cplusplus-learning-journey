#include <iostream>

using namespace std;
int largeSum(int arr[], int n) { 
int max=arr[0];
for(int i=0;i<n;i++)
if(arr[i]>max)
max=arr[i];
return max;


}

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,f=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int sum[n*(n-1)];
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++) {
    if(j==i)
    continue;
    sum[f++]=a[j]+a[i];

    }






  
}
cout<<largeSum(sum,n*(n-1));

}