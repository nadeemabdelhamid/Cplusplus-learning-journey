#include<iostream>
using namespace std;
int main(){
int x[10];
int n;
int a,b;
bool check=false;
cout<<"enter elements of array (max =10)\n";
cin>>n;
for(int i=0;i<n;i++){
cin>>x[i];


}
cout<<"enter two numbers";
cin>>a>>b;
for(int i=0;i<=n-1;i++){
if(x[i]==a&&x[i+1]==b || x[i]==b&&x[i+1]==a) { 
check =true;



}
}


if(check)
cout<<"consecutive\n";

}
