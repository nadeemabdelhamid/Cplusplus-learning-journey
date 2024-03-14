#include <iostream>
using namespace std;
   string palindrome(string a,int l,int r){
for(int i=l-1;i<r-1;i++)
a[i]


for(int i=l-1;i<(r-l+1)/2;i++){
char x=a[i];
a[i]=a[r-i-1];
a[r-i-1]=x;






}

return a ;


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
string x;
int q;
cin>>x>>q;
while(q--){
int l,r;
cin>>l>>r;
cout<<palindrome(x,l,r)<<endl;


}










}
