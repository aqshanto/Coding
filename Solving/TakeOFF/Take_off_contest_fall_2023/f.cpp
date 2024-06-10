#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int over,run=0,wi=0,ball=1;
        cin>>over;
        while(over--){
            int b=0;
            while(1){
                string ch;
                cin>>ch;
                if(ball==1){
                    if(ch[0]>='A' && ch[0]<='Z'){
                        if(ch[0]=='B'){
                            wi++;
                            b++;
                        }else if(ch[0]=='C'){
                            wi++;
                            b++;
                        }else if(ch[0]=='R'){
                            wi++;
                            b++;
                        }else if(ch[0]=='W'){
                            run++;
                        }else if(ch[0]=='N'){
                            run++;
                            ball=0;
                        }
                    }else if(ch.size()==1 && ch[0]<='6' && ch[0]>='0'){
                        run+=ch[0]-48;
                        b++;
                    }
                }else if(ball==0){
                    if(ch[0]=='R'){
                        wi++;
                        b++;
                        ball=1;
                    }else if(ch[0]=='W' || ch[0]=='N'){
                        run++;
                        ball=0;
                    }else if(ch[0]=='B' || ch[0]=='C'){
                        ball=1;
                        b++;
                    }else if(ch.size()==1 && ch[0]<='6' && ch[0]>='0'){
                        run+=ch[0]-48;
                        ball=1;
                        b++;
                    }
                }
                // cout<<run<<" ";
                if(wi==10){
                    break;
                }
                if(b==6){
                    break;
                }
            }
            // cout<<endl;
            // cout<<run<<" "<<b<<endl;
            if(wi==10){
                break;
            }
        }
        cout<<run<<endl;
    }
    return 0;
}