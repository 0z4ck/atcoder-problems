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

const string YES = "Yes";
const string NO = "No";

void solve(long long a, long long b, long long c){
    if (c-a-b>0&&4*a*b<(c-a-b)*(c-a-b))
        cout<<YES<<endl;
    else
        cout<<NO<<endl;

}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long a;
    std::scanf("%lld", &a);
    long long b;
    std::scanf("%lld", &b);
    long long c;
    std::scanf("%lld", &c);
    solve(a, b, c);
    return 0;
}
