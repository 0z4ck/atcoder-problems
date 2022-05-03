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

int pow(int n, int p){
    int a = 1;
    for (int i=0;i<p;i++){
        a *= n;
    }
    return a;
}

void solve(){
    int dp[10][10];
    char dic[3]={'o','-','|'};
    int n=3;
    int trit, ans=0;
    bool valid;
    rep(i,pow(3,n*n)){
        valid = true;
        for(int y=0;y<n*n;y+=n){
            trit =  (i /pow(3,y))% 3 ;
            //cout<< dic[trit]<<" ";
            for (int j=y+1;j<y+n;j++){
                if ( trit == ( i /  pow(3, j) )% 3 && trit == 1 )
                    valid = false;
                trit = ( i / pow(3, j) )% 3 ;
                //cout<< dic[trit]<<" ";
            }
        }
        for(int x=0;x<n;x++){
            trit = (i/ pow(3,x) )% 3;
            for(int y=1; y<n;y++){
                if ( trit == ( i / pow(3, y*n+x) ) % 3 && trit == 2)
                    valid = false;
                trit = ( i / pow(3, y*n+x) ) % 3 ;
            }
        }
        //cout<<endl;
        //DBGln(valid);
        if(valid)
            ans++;
    }
    cout<< ans <<endl;
            
    /*unsigned long long dp[18][3][3][10];

    for(int i=0;i<18;i++)
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                for(int l=0;l<10;l++)
                    dp[i][j][k][l] = 1;

    // 0 : " " , 1 : "-", 2 : "|"

    for(int i=2;i<18;i++)
        for(int l=0;l<i;l++)
            for(int j=0;j<3;j++)
                for(int k=0;k<3;k++)
                    dp[i][j][k][l] = dp[i-1][j]

    */
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    solve();
    return 0;


}



