#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;

void print_2queue(queue<vector<int>> q, queue<vector<int>> q2)
{
  cout<<"q1 = queue ( ";
  while (!q.empty())
  {
    vector<int> v = q.front();
    std::cout << "{"<<v[0]<<","<<v[1] << "},";
    q.pop();
  }
  cout<<" ) , q2 = queue ( ";
  while (!q2.empty())
  {
    auto v = q2.front();
    std::cout << "{"<<v[0]<<","<<v[1] << "},";
    q2.pop();
  }

  std::cout <<")"<< std::endl;
}

void solve(long long H, long long W, std::vector<std::string> s){
    vector<vector<int>> cost(H, vector<int>(W,0));
    int c=0;
    queue<vector<int>> q[2];
    q[0].push(vector<int> {-1,0,0});

    vector<vector<bool>> fl(H,vector<bool>(W,true));
    
    while(!(q[c%2].empty()&&q[c%2^1].empty())){
        //cerr<<"loop start"<<endl;
        //print_2queue(q[0],q[1]);
        vector<int> v = q[c%2].front();q[c%2].pop();
        //cerr<< v[0]<<" " <<v[1] <<endl;
        if (v[0]>-1&&!fl[v[0]][v[1]]){
            if(q[c%2].empty())
                c++;
            continue;
        }
        //cerr<<c<<endl;
        //cerr<<" start down" <<endl;
        if(H>v[0]+1 && fl[v[0]+1][v[1]]){
            if(v[2]==s[v[0]+1][v[1]]%2)
                if (v[0]+1==H-1&&v[1]==W-1)
                    break;
                else
                    q[c%2].push(vector<int> {v[0]+1,v[1],v[2]});
            else
                q[c%2^1].push(vector<int> {v[0]+1,v[1],v[2]^1});
        }
        //cerr<<" start right" <<endl;
        if(v[0]>-1&&W>v[1]+1 && fl[v[0]][v[1]+1]){
            if(v[2]==s[v[0]][v[1]+1]%2)
                if (v[0]==H-1&&v[1]+1==W-1)
                    break;
                else
                    q[c%2].push(vector<int> {v[0],v[1]+1,v[2]});
            else
                q[c%2^1].push(vector<int> {v[0],v[1]+1,v[2]^1});
        }
        //cerr<<" donedown right" <<endl;
        if (v[0]>-1)
            fl[v[0]][v[1]]=false;
        //cerr<<" flag updated" <<endl;
        if(q[c%2].empty())
            c++;
        //cerr<<"c incremented" <<endl;
    }
    cerr<<c<<endl;
    cout<<c/2<<endl;


}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    std::vector<std::string> s(W);
    for(int i = 0 ; i < W ; i++){
        std::cin >> s[i];
    }
    solve(H, W, std::move(s));
    return 0;
}
