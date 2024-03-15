#include<iostream> 
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

string x,y;
cin>>x>>y;
int sum1=0,sum2=0;
for(char i:x){
if(i>='A'&&i<='Z')
sum1+=i-'A'+1;
else if(i>='a'&&i<='z')
sum1+=i-'a'+1;

}
for(char i:y){
if(i>='A'&&i<='Z')
sum2+=i-'A'+1;
else if(i>='a'&&i<='z')
sum2+=i-'a'+1;


}

if(sum1>sum2)
cout<<1;
else if(sum2>sum1)
cout<<-1;
else 
cout<<0;


}