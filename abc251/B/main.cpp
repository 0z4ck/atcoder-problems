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

void solve(long long N, long long W, std::vector<long long> A){
    vector<bool> seen(W+1,false);
    int ans = 0;
    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++)
            for(int k=j+1;k<N;k++){
                if(A[i]+A[j]+A[k]<=W){
                    if(!seen[A[i]+A[j]+A[k]])
                        ans++;
                    seen[A[i]+A[j]+A[k]]=true;
                }
            }
    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++)
                if(A[i]+A[j]<=W){
                    if(!seen[A[i]+A[j]])
                        ans++;
                    seen[A[i]+A[j]]=true;
                }
    for(int i=0;i<N;i++)
                if(A[i]<=W){
                    if(!seen[A[i]])
                        ans++;
                    seen[A[i]]=true;
                }
    cout<<ans<<endl;

}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long W;
    std::scanf("%lld", &W);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, W, std::move(A));
    return 0;


}



