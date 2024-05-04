#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> p;
p.emplace_back(1);
p.emplace_front(2);
auto it=p.begin();
for(;it!=p.end();it++)
cout<<*it<<" ";
p.clear();





}