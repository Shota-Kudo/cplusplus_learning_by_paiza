#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int N, f[100],sum_f=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>f[i];
        if(i==0){
            sum_f = f[i] - 1;
        }else if(f[i-1]<f[i]){
            sum_f += (f[i] - f[i-1]);
        }else if(f[i]<f[i-1]){
            sum_f += (f[i-1] - f[i]);
        }else{
            sum_f += 0;
        }
    }
    cout<<sum_f;
    return 0;
}
