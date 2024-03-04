#include<iostream>
using namespace std;
int main() {

int n ,cnt=0,cnt1=0;
bool checkk=true;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
while(checkk){
for(int i=0;i<n;i++)
if (a[i]%2==0){
cnt++;
checkk=false;
}
if(cnt==n){
    checkk =true;
cnt1++;

}
for(int i=0;i<n;i++){
a[i]/=2;
}

cnt=0;


}
cout<<cnt1;








}