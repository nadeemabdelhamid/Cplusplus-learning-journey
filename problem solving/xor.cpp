#include<iostream>
using namespace std;
 double quu(double a,double b,double q){
if (q==1)
return a;
if (q==2)
return b;
return (quu(a,b,q-1)^quu(a,b,q-2));


}
int main(){
 double` a,b,q;
cin>>a>>b>>q;
cout<<quu(a,b,q);




}