#include <bits/stdc++.h>
#define DBGln(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
#define DBG(x) do { std::cerr << #x << ": " << x << " "; } while (0)
#define rep(i, n) for (ll i=0; i<n; ++i)
#define all(obj) (obj).begin(),(obj).end()
#define rall(obj) (obj).rbegin(),(obj).rend()
typedef long long ll;
using namespace std;
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

template<typename T>
std::ostream& operator<<(std::ostream& s, const std::vector<T>& v){
    s.put('[');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}
template<typename T,typename T2>
std::ostream& operator<<(std::ostream& s, const std::pair<T,T2>& p){
    s.put('{');
    s<<p.first<<": "<<p.second;
    return s << '}';
}
template<typename T>
std::ostream& operator<<(std::ostream& s, const std::vector<std::vector<T>>& v){
    for(const auto& e : v){
        s.put('[');
        char comma[3] = {'\0', ' ', '\0'};
        for (const auto& e2 : e) {
            s << comma << e2;
            comma[0] = ',';
        }
        s << ']'<<endl;
    }
    return s;
}
template<typename T,typename T2>
std::ostream& operator<<(std::ostream& s, const std::map<T,T2>& mp){
    s.put('{');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& p : mp) {
        s << comma << p.first << ": "<<p.second;
        comma[0] = ',';
    }
    return s << '}';
}
template<typename T>
std::ostream& operator<<(std::ostream& s, std::queue<T> q){
    s<<"queue(";
    char comma[3] = {'\0', ' ', '\0'};
    while (!q.empty()){
        s << comma <<q.front();
        q.pop();
        comma[0] = ',';
    }
    return s << ')';
}
template<typename T>
std::ostream& operator<<(std::ostream& s, std::stack<T> stk){
    s<<"stack(";
    char comma[3] = {'\0', ' ', '\0'};
    while (!stk.empty()){
        s << comma <<stk.top();
        stk.pop();
        comma[0] = ',';
    }
    return s << ')';
}
template<typename T>
std::ostream& operator<<(std::ostream& s, std::set<T> stt){
    s<<"set(";
    char comma[3] = {'\0', ' ', '\0'};
    for(auto &a:stt){
        s << comma <<a;
        comma[0] = ',';
    }
    return s << ')';
}

#include <bits/stdc++.h>
using namespace std;

// ???????????????
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

/*  divisor_num(n)
    ??????????????? n
    ?????????n??????????????????
    ????????????O(???n)
*/
template <typename T>
T divisor_num(T N) {
    map<T, T> pf = prime_factor(N);
    T ret = 1;
    for (auto p : pf) {
        ret *= (p.second + 1);
    }
    return ret;
}

void solve(long long N){
    int cnt=0;
    //int dn;
    //
    /*rep(i,N)
        rep(j,N)
            if(sqrt((i+1)*(j+1))==floor(sqrt((i+1)*(j+1)))){
                cnt++;
                if(i==j)
                    continue;
                DBG(i+1);
                DBGln(j+1);
            }

    */
    //cout << divisor_num(N) << endl;
    for(int i=1;i<N+1;i++){
        for(int d=2;d<floor(sqrt(i))+1;d++){
            if(i%d)
                continue;
            if((i/d)%d)
                continue;
            DBG(i/d/d);
            DBGln(i);
            cnt+=2;
        }
    }

    cout << N+cnt <<endl;
    //cout << cnt <<endl;
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;


}



