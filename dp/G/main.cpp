#include <bits/stdc++.h>
#define DBGln(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
#define DBG(x) do { std::cerr << #x << ": " << x ; } while (0)
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

void dfs(long long node, vector<vector<long long>> &G, vector<long long> &ts, vector<bool> &visited){
    if(!visited[node]){
        visited[node]=true;
        for(auto nxt: G[node])
            dfs(nxt, G, ts, visited);
        ts.push_back(node);
    }
}
void solve(long long N, long long M, std::vector<long long> x, std::vector<long long> y){
    vector<vector<long long>> G(N);
    for(int i=0;i<M;i++){
        G[x[i]-1].push_back(y[i]-1);
    }
    vector<bool> visited(N,false);
    vector<long long> ts;
    for(int i=0;i<N;i++){
        if (visited[i])
            continue;
        dfs(i,G,ts,visited);
    }
    reverse(ts.begin(),ts.end());
    int ans=0;
    vector<int> dp(N,0);
    for(auto &node : ts)
        for(auto &nxt : G[node])
            dp[nxt] = max(dp[node]+1,dp[nxt]);
    for(int i=0;i<N;i++)
        ans=max(ans,dp[i]);
    cout<<ans<<endl;
    /*stack<long long> s;
    vector ts;
    vector visited(N,false);
    s.push(0);

    while(!s.empty()){
        auto node = s.top(); s.pop();
        if(visited[node])
            continue;
        visited=true;
        for(auto &nxt: G[node])
            s.push(nxt);
    }*/


}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> x(M);
    std::vector<long long> y(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(N, M, std::move(x), std::move(y));
    return 0;
}
