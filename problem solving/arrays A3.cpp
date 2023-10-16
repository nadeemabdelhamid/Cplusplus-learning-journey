#include<iostream>
#include<array>
using namespace std;
int main(){
    int filling = 10;
array<int,4>vals={100, 200, 300, 400};

vals.fill(filling);

cout << vals[0] << "\n"; // 10
cout << vals[1] << "\n"; // 10
cout << vals[2] << "\n"; // 10
cout << vals[3] << "\n"; // 10
}