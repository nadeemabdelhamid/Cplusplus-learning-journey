#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool compare( pair<int,int> a,  pair<int,int> b){ return a.second> b.second;}

int main() {
    int n,x,y;
    cin >> n;

vector<pair<int, int>> v;
for(int i=0;i<n;i++){
cin>>x>>y;
v.push_back({x, y});

}
sort(v.begin(), v.end(), compare);


for(auto v:v)
cout<<v.first<<" "<<v.second<<endl;
}