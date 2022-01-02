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


void solve(long long N, std::vector<long long> S){
    vector<int> v(1000);
    int c=0;
    for(int i=1; i<1000;i++)
        for(int j=1;j<=1000;j++){
            int a = 4*i*j+ 3*i+3*j; 
            if (a<=1000) v[a]++;
        }
    for(int i=0;i<N;i++)
        if(v[S[i]]==0)c++;
    cout<<c<<endl;
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &S[i]);
    }
    solve(N, std::move(S));
    return 0;
}
