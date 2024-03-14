#include <iostream>
using namespace std;

int count_numbers_not_divisible(int L, int R, int N) {
    int total_count = R - L + 1;
    int divisible_count = (R / N) - ((L - 1) / N);
    return total_count - divisible_count;
}

int main() {
    int L, R, N;
    cin >> L >> R >> N;
    
    cout << count_numbers_not_divisible(L, R, N) << endl;

    return 0;
}
