#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    long long n;
    cin >> n;
    if (isPrime(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}