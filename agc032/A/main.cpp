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


void solve(long long N, std::vector<long long> b){
    vector<long long> ans(N,0);
    for(int i=N-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(j+1==b[j]){
                ans[i]=b[j];
                b.erase(b.begin()+j);
                break;
            }
        }
        if(ans[i]==0){
            cout<<-1<<endl;
            return;
        }
    }
    for (int i=0;i<N;i++)
        cout<<ans[i]<<endl;


}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> b(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &b[i]);
    }
    solve(N, std::move(b));
    return 0;
}
