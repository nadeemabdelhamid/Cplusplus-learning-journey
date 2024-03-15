#include <iostream>
#include<iomanip>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    double sum=0.0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    cout<<fixed<<setprecision(12)<<sum/n<<endl;
    
}