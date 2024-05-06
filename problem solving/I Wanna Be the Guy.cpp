#include<iostream>
#include<vector>

using namespace std;
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n,x,y,z,cnt=0;
   cin>>n;
   cin>>x;
   vector<int> X(x);
   for(auto i=0;i<x;i++)
   cin>>X[i];
cin>>y;
while(y--){
cin>>z;
X.push_back(z);


}
vector <bool> nums (n,false);
for (int i = 0; i < X.size(); i++)  
	nums[X[i]]=true;
cout<<n;

for(int j=1;j<=n;j++)
if(nums[j])
cnt++;
if(cnt==n)
cout<<"I become the guy.";  
else
cout<<"Oh, my keyboard!";
   



   
}