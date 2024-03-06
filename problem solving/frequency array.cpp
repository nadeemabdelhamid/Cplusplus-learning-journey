#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 1; i <= m; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] == i) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}



