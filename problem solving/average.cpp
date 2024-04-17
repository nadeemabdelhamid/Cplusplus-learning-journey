#include <iostream>
#include<iomanip>
using namespace std;
   double avr(double a[],double n){
double sum=0;
for(int i=0;i<n;i++){
sum+=a[i];


}
return sum/n;


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int x;
   cin>>x;
   double a[x];
   for(int i=0;i<x;i++)
   cin>>a[i];
cout<<fixed<<setprecision(7)<<avr(a,x);




}