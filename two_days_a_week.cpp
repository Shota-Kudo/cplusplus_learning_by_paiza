#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int n, day[100000];
    int zero_counter=0, holiday=0, max_holiday=0,holiday_seq=0; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>day[i];
    }
    for(int j=0; j<n-6; j++){
        for(int i=0; i<7; i++){
            if(day[i+j]==0){
                zero_counter++;
            }
        }
        if(zero_counter>=2){
            holiday++;
            if(holiday_seq<holiday){
                holiday_seq = holiday;
            }
        }else{
            if(holiday_seq<holiday){
                holiday_seq = holiday;
            }
            holiday=0;
        }
        zero_counter=0;
    }
    if(holiday_seq==0){
        max_holiday=0;
    }else{
        max_holiday = 6+holiday_seq;
    }
    cout<<max_holiday;
    //cout<<day[3];
    return 0;
}
