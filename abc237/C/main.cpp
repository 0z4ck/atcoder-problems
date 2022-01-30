#include <bits/stdc++.h>
#define DBGln(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
#define DBG(x) do { std::cerr << #x << ": " << x ; } while (0)
using namespace std;
const string YES = "Yes";
const string NO = "No";
void solve(std::string S){
    int N = S.size();
    int h_a=0;
    int t_a=0;

    for(int i=0;i<N;i++){
        if(S[i]!='a')
            break;
        h_a++;
    }
    for(int i=0;i<N;i++){
        if(S[N-i-1]!='a')
            break;
        t_a++;
    }
    if(h_a==N){
        cout<<YES<<endl;
        return;
    }
    if(h_a>t_a){
        cout<<NO<<endl;
        return;
    }

    for(int i=0;i<(N+h_a-t_a)/2;i++){
        if (S[i]!=S[N-i-1+h_a-t_a]){
            cout<<NO<<endl;
            return ;
        }
    }
    cout << YES <<endl;
}
// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
