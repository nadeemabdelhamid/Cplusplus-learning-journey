#include <iostream>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
string c;
    int sum =0;
cin>>c;
for(char i:c)
{
    sum+=i-'0';
}
if(sum%3==0)
cout<<"YES";
else  
cout<<"NO";







}