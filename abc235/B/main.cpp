#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

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

void solve(long long N, std::vector<long long> H){

}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> H(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &H[i]);
    }
    solve(N, std::move(H));
    return 0;
}
