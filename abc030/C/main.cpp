#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;


void solve(long long N, long long M, long long X, long long Y, std::vector<long long> a, std::vector<long long> b){

}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
    }
    std::vector<long long> b(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &b[i]);
    }
    solve(N, M, X, Y, std::move(a), std::move(b));
    return 0;
}
