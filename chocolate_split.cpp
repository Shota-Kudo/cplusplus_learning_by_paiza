#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int h, w, a=0, b=0;
    string judge;
    int sugar_level[100][100], share[100];
    cin>>h>>w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
        cin>>sugar_level[i][j];
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            a += sugar_level[i][j];
            for(int k=j+1; k<w; k++){
                b += sugar_level[i][k]; 
            }
            if(a==b){
                share[i] = j;
                b=0;
                break;
            }else{
                share[i] = -1;
                b=0;
            }
        }
        a=0;
    }
    for(int i=0; i<h; i++){
        if(share[i]>=0){
            judge = "Yes";
        }else{
            judge ="No";
            cout<<judge;
            return 0;
        }
    }
    cout<<judge<<endl;
    for(int i=0; i<h; i++){
        for(int j=0; j<share[i]+1; j++){
            cout<<'A';
        }
        for(int k=0; k<w-share[i]-1; k++){
            cout<<"B";
        }
        cout<<endl;
    }
    return 0;
}
