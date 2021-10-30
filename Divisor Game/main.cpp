#include <iostream>
#include <vector>

using namespace std;

bool divisor_game(int N) {
    vector<bool> v(N+1, false);

    // Bottom-up. Our i is our N and j is our x.
    for(int i = 2; i <= N; ++i) {
        for(int j = 1; j < i; ++j) {
            if(i % j == 0 && !v[i-j]) {
                v[i] = true;
                break;
            }
        }
    }
    return v[N];
}


int main() {
    cout << boolalpha << divisor_game(2);

    return 0;
}
