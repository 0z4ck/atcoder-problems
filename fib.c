#include <stdio.h>
#include <immintrin.h>
//using namespace std;
unsigned int f(unsigned int a){
    return a?_pext_u32(a, _blsr_u32(_blsmsk_u32(1<<32)))?f(_blsmsk_u32(a)^a)+f(_blsmsk_u32((_blsmsk_u32(a)^a))^(_blsmsk_u32(a)^a)):1:0;
}
main(){
    /*for(int i=2;i<10;i++){
        bitset<8> x(i);
        //bitset<8> x2(_blsr_u32(_blsmsk_u32(i))^i);
        bitset<8> x2((_blsmsk_u32(i)+1)^i);
        cout<<x<<" => "<<x2<<"  "<<i <<" => "<<((_blsmsk_u32(i)+1)^i)<<endl;
    }*/

    int n;scanf("%d",&n);
    printf("%d\n",f(n));
}
