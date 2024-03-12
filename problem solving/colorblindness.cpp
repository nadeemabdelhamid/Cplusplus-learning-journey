#include <iostream>
using namespace std;
   string check(string x,string y)  {
    int cnt=0;
        bool m[x.length()]={false};
for(int i=0;i<x.length();i++) {
    for(int j=0;j<y.length();j++) {
        
        if(x[i]==y[j])
          m[i]=true;
        if(x[i]=='B'&&y[j]=='G')
          m[i]=true;
        if(x[i]=='G'&y[j]=='B')
         m[i]=true;
    }

    }

for(int k=0;k<x.length();k++)
if(m[k])
cnt++;
if(cnt==x.length())
return "YES";
else 
return "NO";


   }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
int q,n;
cin>>q;
string x,y;
while(q--){
cin>>n;
cin>>x>>y;
cout<<check(x,y)<<endl;




}



}