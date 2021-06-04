#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    string str;
    getline(cin, str);
    for(int i = 0; i<str.length()+2; i++){
        cout<<'+';
    }
    cout<<endl;
    cout<<'+'<<str<<'+'<<endl;
    for(int i = 0; i<str.length()+2; i++){
        cout<<'+';
    }
    cout<<endl;
    return 0;
}
