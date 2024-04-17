#include<iostream>
using namespace std;
    int cnt=0;
void num(int x){
if (x==1){
cout<<cnt+1;
return ;

}
if(x%2==0){
cnt++;
 num(x/2);
}
if(x%2!=0){
cnt++;
 num(3*x+1);
}


}
int main(){

int x;
cin>>x;
num(x);


}