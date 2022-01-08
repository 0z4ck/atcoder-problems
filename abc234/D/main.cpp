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


void solve(long long N, long long K, std::vector<long long> P){
    vector<long long> Px(P.begin(),P.begin()+K);

    sort(Px.begin(),Px.end());

    cout << Px[0] <<endl;

    long long dum=0;
    for(int i=K;i<N;i++){
        if(P[i]<=Px[i-K-dum])
            dum++;
        else
            Px.insert(upper_bound(Px.begin()+i-K-dum, Px.end(), P[i]), P[i] );
        cout << Px[i-K+1-dum]<<endl;
    }

}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &P[i]);
    }
    solve(N, K, std::move(P));
    return 0;
}
