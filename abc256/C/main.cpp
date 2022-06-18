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

void solve(std::vector<long long> h, std::vector<long long> w){
    long long count=0;
    vector<vector<int>> h0, h1, h2;
    for (int i=1; i<=30; i++) {
        for (int j=1; j<=30; j++) {
            for (int k=1; k<=30; k++) {
                if (i+j+k == h[0]) h0.push_back({i, j, k});
            }
        }
    }
    for (int i=1; i<=30; i++) {
        for (int j=1; j<=30; j++) {
            for (int k=1; k<=30; k++) {
                if (i+j+k == h[1]) h1.push_back({i, j, k});
            }
        }
    }
    for (int i=1; i<=30; i++) {
        for (int j=1; j<=30; j++) {
            for (int k=1; k<=30; k++) {
                if (i+j+k == h[2]) h2.push_back({i, j, k});
            }
        }
    }
    for (auto aaa:h0){
        for (auto bbb:h1){
            for (auto ccc:h2){
                if (aaa[0]+bbb[0]+ccc[0]==w[0]&&aaa[1]+bbb[1]+ccc[1]==w[1]&&aaa[2]+bbb[2]+ccc[2]==w[2]) count++;
            }
        }
    }
    cout<<count<<endl;

}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::vector<long long> h(3);
    for(int i = 0 ; i < 3 ; i++){
        std::scanf("%lld", &h[i]);
    }
    std::vector<long long> w(3);
    for(int i = 0 ; i < 3 ; i++){
        std::scanf("%lld", &w[i]);
    }
    solve(std::move(h), std::move(w));
    return 0;


}



