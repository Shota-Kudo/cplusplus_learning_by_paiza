#include <iostream>
#include<math.h>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int N, M;
    cin>>N>>M;
    int A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    
    int Q, sumA;
    double avgA;
    cin>>Q;
    int S[Q], E[Q];
    for(int i=0; i<Q; i++){
        sumA=0;
        cin>>S[i]>>E[i];
        //cout<<A[i]<<endl;
        for(int j=S[i]; j<=E[i]; j++){
            sumA += A[j-1];
        }
        avgA = double(sumA) / (E[i]-S[i]+1);
                //cout<<avgA<<endl;
        while(avgA < double(M)){
            sumA=0;
            for(int j=S[i]; j<=E[i]; j++){
                //A[j-1] += (M - int(floor(avgA)));
                A[j-1] = A[j-1] + 1;
                sumA += A[j-1];
            }
            avgA = double(sumA) / (E[i]-S[i]+1);
        }
    }
    for(int i=0; i<N; i++){
        cout<<A[i];
        if(i!=N-1){
            cout<<' ';
        }
    }
    return 0;
}
