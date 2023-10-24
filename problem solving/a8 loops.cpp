#include<iostream>
using namespace std;
int main(){
int end;
unsigned int i;
cout<<"enter your  ending point"<<endl;
cin>>end;
i=end;
if(end<=200){
while(end>=i){
if(i%8==0||i%3==0&&i%4==0){
cout<<i<<" ";

}
i--;


}
}
else{
    cout<<"your number is out of range";
}


}