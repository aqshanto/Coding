#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int c,fail=0;
        cin>>c;
        double total_marks=0,total_credit=0;
        for(int i=0;i<c;i++){
            double marks,credit,grade=0.0;
            cin>>marks>>credit;
            if(marks<40.00){
                fail++;
            }else{
                if(marks<=100.00 && marks>=80.00){
                    grade = 4.00;
                }else if(marks<80.00 && marks>=75.00){
                    grade = 3.75;
                }else if(marks<75.00 && marks>=70.00){
                    grade = 3.50;
                }else if(marks<70.00 && marks>=65.00){
                    grade = 3.25;
                }else if(marks<65.00 && marks>=60.00){
                    grade = 3.00;
                }else if(marks<60.00 && marks>=55.00){
                    grade = 2.75;
                }else if(marks<55.00 && marks>=50.00){
                    grade = 2.50;
                }else if(marks<50.00 && marks>=45.00){
                    grade = 2.25;
                }else if(marks<45.00 && marks>=40.00){
                    grade = 2.00;
                }
                total_marks+=(grade*credit);
                total_credit+=credit;
            }
        }
        if(fail==0){
            cout<<"Case "<<j<<": "<<fixed<<setprecision(2)<<total_marks/total_credit<<endl;
        }else{
            cout<<"Case "<<j<<": Sorry, you have failed in "<< fail << " courses!"<<endl;
        }
    }
    
    return 0;
}