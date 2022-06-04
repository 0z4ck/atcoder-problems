#include <bits/stdc++.h>
using namespace std;

template <typename T>
map<T, T> prime_factor(T n) {
    map<T, T> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret[i] = tmp;
    }
    if (n != 1) ret[n] = 1;
    return ret;
}

template <typename T>
T divisor_num(T N) {
    map<T, T> pf = prime_factor(N);
    T ret = 1;
    for (auto p : pf) {
        ret *= (p.second + 1);
    }
    return ret;
}

long long N;

int main() {
    cin >> N;
    cout << divisor_num(N) << endl;
    return 0;
}
