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


void solve(long long N, std::vector<long long> Ax, std::vector<long long> Ay, std::vector<long long> Bx, std::vector<long long> By){

}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> Ax(N);
    std::vector<long long> Ay(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &Ax[i]);
        std::scanf("%lld", &Ay[i]);
    }
    std::vector<long long> Bx(N);
    std::vector<long long> By(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &Bx[i]);
        std::scanf("%lld", &By[i]);
    }
    solve(N, std::move(Ax), std::move(Ay), std::move(Bx), std::move(By));
    return 0;
}
