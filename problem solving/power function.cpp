#include <iostream>
using namespace std;
   int powfun(int val,int p=2){
if(p==0)
return 1;
return  val*powfun(val,p-1);




   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
int x,y;
cin>>x>>y;
cout<<powfun(x,y);






}