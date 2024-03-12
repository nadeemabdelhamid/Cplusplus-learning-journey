#include <iostream>
#include<string>
using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,cnt=0;
cin>>n;
string a;
bool check[26]={false};
cin>>a;
for(char c:a)
if(c>=97&&c<=122)
check[c-97]=true;
else if(c>=65&&c<=90)
check[c-65]=true;
for(int i=0;i<26;i++) 
if(check[i])
cnt++;

if(cnt==26)
cout<<"YES";
else 
cout<<"NO";
    
}
