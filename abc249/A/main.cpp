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

void solve(long long A, long long B, long long C, long long D, long long E, long long F, long long X){
    long long c=0,f=0;
    for(long long x=X;x>0;){
        x-=A;
        if(x>0){
            c += min(C, x);
            x -= min(C, x);
        }
    }
    for(long long x=X;x>0;){
        x-=D;
        if(x>0){
            f += min(F, x);
            x -= min(F, x);
        }
    }
   if ( B*(X-c) == E*(X-f))
       cout<<"Draw"<<endl;
   else if ( B*(X-c) > E*(X-f))
       cout<<"Takahashi"<<endl;
   else if (B*(X-c) < E*(X-f))
       cout<<"Aoki"<<endl;
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    long long D;
    std::scanf("%lld", &D);
    long long E;
    std::scanf("%lld", &E);
    long long F;
    std::scanf("%lld", &F);
    long long X;
    std::scanf("%lld", &X);
    solve(A, B, C, D, E, F, X);
    return 0;


}



