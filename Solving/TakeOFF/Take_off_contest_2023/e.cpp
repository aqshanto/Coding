#include<bits/stdc++.h>

using namespace std;

int main(){
    double a,b,dia,redius,circle_area,tri_area;
    cin>>a>>b;
    dia=sqrt(a*a+b*b);
    redius=dia/2;
    tri_area=0.5*a*b;
    circle_area=3.1416*redius*redius;
    cout<<fixed<<setprecision(6)<<circle_area-tri_area<<endl;
    return 0;
}