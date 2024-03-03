#include<iostream>
using namespace std;
int main(){
int n ,num,sum=0;
cin>>n>>num;
int a[n];
for(int i=0 ;i<n ;i++){
a[i]=num%10;
num/=10;

}

for(int i=0;i<n;i++){

sum+=a[i];
}
cout<<sum;



    


}