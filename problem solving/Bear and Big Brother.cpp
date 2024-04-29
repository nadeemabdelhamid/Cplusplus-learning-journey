#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int x,y,cnt=0;
 cin>>x>>y;
while(x<=y)
{
x=x*3;
y*=2;
cnt++;

}  
if(x==y)
cout<<1;
else
cout<<cnt;
   
}