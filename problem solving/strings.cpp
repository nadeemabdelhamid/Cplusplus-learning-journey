#include <iostream>
#include<string>
using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  string x,y;
  cin>>x>>y;
cout<<x.length()<<" "<<y.length()<<'\n';
cout<<x+y<<"\n";
char tmp;
tmp=x[0];
x[0]=y[0];
y[0]=tmp;
cout<<x+" "+y<<"\n";
}