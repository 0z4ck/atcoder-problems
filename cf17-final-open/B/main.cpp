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

const string YES = "YES";
const string NO = "NO";

void solve(std::string S){
    int c[3] = {0,0,0};

    for(int i=0;S[i];i++)
        c[S[i]%3]++;

    if (max(c[0],max(c[1],c[2])) - min(c[0],min(c[1],c[2])) <2)
        cout <<YES<<endl;
    else
        cout <<NO<<endl;

}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
