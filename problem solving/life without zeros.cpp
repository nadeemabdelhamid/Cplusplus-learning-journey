#include <iostream>
using namespace std;
   int zeroo(int x){
int result=0;
int z=1;
while(x>0){
int digit=x%10;
x/=10;
if(digit!=0){
result=z*digit+result;
z*=10;



}


}

return result;






}






   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    int sum;
    cin>>x>>y;
sum=x+y;


if(zeroo(sum)==zeroo(x)+zeroo(y))
cout<<"YES";
else 
cout<<"NO";





}