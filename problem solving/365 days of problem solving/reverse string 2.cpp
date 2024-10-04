#include<iostream>
using namespace std;
string rev_str(const string &x){
string n=x;
int start=0;
int end=n.length()-1;
while(end>start){
char y=n[start];
n[start]=n[end];
n[end]=y;
start++;
end--;




}
return n;


}

int main(){
string x;
cin>>x;

cout<<rev_str(x);


}