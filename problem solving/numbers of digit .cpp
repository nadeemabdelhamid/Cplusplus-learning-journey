#include<iostream>
using namespace std;
int main() {

int x,i,cnt=0;
cin>>x;
if(x==0)
{
    cnt=1;
}
while(x>0)
{
x=x/10;
cnt++;
}

cout<<cnt;
}