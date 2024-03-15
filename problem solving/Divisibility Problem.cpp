#include<iostream>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
int n,x,y,cnt;
cin>>n;
while(n--){
cin>>x>>y;
cnt=0;
while(x%y!=0){
x++;
cnt++;

}
cout<<cnt<<'\n';



}


}