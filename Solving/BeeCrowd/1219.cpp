#include<bits/stdc++.h>

using namespace std;

int main(){
    double p,triangle_area,bCircle,sCircle,sredius,bredius,violets,sunflower,roses,a,b,c;
    while(cin>>a>>b>>c){
        
        p=(a+b+c)/2;
        triangle_area=sqrt(p*(p-a)*(p-b)*(p-c));
        sredius=triangle_area/p;
        bredius=(a*b*c)/(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)));
        
        sCircle=(3.1415926535897*sredius*sredius);
        bCircle=(3.1415926535897*bredius*bredius);
        

        sunflower=bCircle-triangle_area;
        violets=triangle_area-sCircle;
        roses=sCircle;
        
        cout<< fixed <<setprecision(4);
        cout<<sunflower<<" "<<violets<<" "<<roses<<endl;
    }
    return 0;
}