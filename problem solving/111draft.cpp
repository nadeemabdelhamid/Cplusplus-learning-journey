#include <iostream>
using namespace std;
int* newarr(int* a, int n) {
int* newptr = new int[n * 2];
for (int i = 0; i < n; i++)
*(newptr + i) = *(a + i);
for(int i = n; i < n * 2; i++)
*(newptr + i) = 0;
return newptr;
}
int main()
{
int n;
cout << "enter numbers\n";
cin >> n;
int* s = new int[n];
for (int i = 0; i < n; i++)
cin >> s[i];
int* newarrr = newarr(s, n);
for (int i = 0; i < n*2; i++)
cout << newarrr[i];
}
