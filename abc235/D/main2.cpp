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

void solve(long long a, long long N){
    /*int s=0;
    for(int i=0;i<floor(log10(N))+1;i++){
        s+=((long long)(N/pow(10,i)))%10;
    }
    if((s+a)&1)
        cout<<-1<<endl;
    else
        return;
    cerr<<s<<endl;*/
    vector<long long> dp(a*N+a+a,1<<32);

    dp[1]=0;
    dp[a]=1;
    for(long long i=1,j=1;j<(a+1)*(N+1);i++){
        j*=a;
        dp[j]=i;
    }

    while(){
        for(int i=1;i<N+10;i++){
            if(i<10||i%10==0)
                continue;
            long long ss=0;
            int keta = floor(log10(i))+1;
            for(int sn=0;sn<keta;sn++)
                ss+=((int)(i/pow(10,sn)))%10  (sn+1)%keta
    
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long a;
    std::scanf("%lld", &a);
    long long N;
    std::scanf("%lld", &N);
    solve(a, N);
    return 0;
}
