#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
  struct nadeem{
    int a;
    int x;
  };
void readinfo(nadeem &n){
n.a=50;
n.x=-10;


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
nadeem y;
y.a=10;
y.x=5;
readinfo(y);
cout<<y.a<<" "<<y.x;
}