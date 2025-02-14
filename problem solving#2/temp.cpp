#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map<char, int> dict;

vector<int> add(vector<int> x){
    vector<int> result(3);
    for(int y:x)
result[y]=x[y]+3;
return result;
}
int main(){
	dict['{'] = 1;
	dict['}'] = 2;
	dict['('] = 3;
	dict[')'] = 4;
	dict['['] = 5;
	dict[']'] = 6;
cout<<dict['['];


}