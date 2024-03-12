#include <iostream>
#include<string>
using namespace std;
   int ballons(string x){
    int cnt=0;
for(int i=0;i<x.length();i++){
if(x.find(x[i])!=i){
cnt++;
continue;

}
cnt+=2;




}
return cnt;




   }




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int q,n;
string x;
cin>>q;
while(q--){
cin>>n;
cin>>x;
cout<<ballons(x)<<'\n';





}




    
}