#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int x,y,sum=0,evsum=0,osum=0;
   cin>>x>>y;
   if(x>y)
   swap(x,y);
   for(int i=x;i<=y;++i)
    sum+=i; 
   cout<<sum<<endl;
   for(int i=x;i<=y;i++)
   if(i%2==0) evsum += i;
   else osum += i;
   cout<<evsum<<endl<<osum;

   
}