#include <bits/stdc++.h>
#define DBGln(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
#define DBG(x) do { std::cerr << #x << ": " << x << " "; } while (0)
#define rep(i, n) for (ll i=0; i<n; ++i)
#define all(obj) (obj).begin(),(obj).end()
#define rall(obj) (obj).rbegin(),(obj).rend()
typedef long long ll;
using namespace std;
const long long dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

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
const long long MOD = 998244353;

void solve(long long N, long long M, long long K){

    //vector<vector<vector<long long>>> dp(N+1, vector<vector<long long>>(N,vector<long long>(K+1,0)));
    vector<vector<long long>> dp(N,vector<long long>(K+1,0));
    
    for(long long acc=1;acc<N;acc++){
        for(long long i=1;i<M+1;i++)
            dp[0][i]=1;
            //dp[acc][0][i]=1;
    
        /*
    
        dp[1][2] = d[0][1];
        dp[1][3] = d[0][1]+dp[0][2];
        dp[1][4] = d[0][1]+dp[0][2]+dp[0][3];
    
        */
    
        for(long long i=1;i<N;i++){
            for(long long j=i+1;j<K+1;j++){
                for(long long k=max(K-M,i);k<j&&k-i<M;k++){
                    DBG(i);DBG(j);DBG(k);DBG(dp[i][j]);DBGln(dp[i-1][k]);
                    dp[i][j] = (dp[i][j] + dp[i-1][k]) %MOD;
                    //dp[acc][i][j] = (dp[acc][i][j] + dp[acc][i-1][k]) %MOD;
                }
            }
        }
    }
    long long ans=0;
    for(long long acc=1;acc<K+1;acc++)
        ans = (ans + dp[N-1][acc])%MOD;
    //cout<<dp[N-1][K]<<endl;
    cout<<ans<<endl;
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long K;
    std::scanf("%lld", &K);
    solve(N, M, K);
    return 0;


}



