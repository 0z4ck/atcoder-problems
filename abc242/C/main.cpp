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
const long long MOD = 998244353;

void solve(long long N){
    vector<int> a(N);
    vector<vector<long long>> dp(N,vector<long long>(9,0));
    a[0]=1;a[1]=9;dp[0][0]=1;long long s;
    for(int i=2;i<N+1;i++){
        dp[i-1][max(9,i-1)]=1;
        for(int j=0;j<max(9,i-1);j++){
            dp[i-1][j] += dp[i-2][j];
            if(j>-1)
                dp[i-1][j] += dp[i-2][j-1];
            if(max(9,i-1)>j+1)
                dp[i-1][j] += dp[i-2][j+1];
        }

        a[i]=a[i-1]*3-2*(i-1);
    }
    DBGln(dp);
    cout<<a[N]<<endl;
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;


}



