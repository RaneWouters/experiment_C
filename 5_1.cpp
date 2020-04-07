#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double sroot(double val){
    double source=val;
    double temp=val;
    val/=2.;
    while(abs(val-temp)>0.0001){
        temp=val;
        val=(val+source/val)/2.;
    }
    return val;
}
int main(){
    double val;
    cin>>val;
    if(val < 0){
        cout<<"Data Error!";
    }else if(val == 0){
        cout<<0;
    }else{
        cout<<sroot(val);
    }
    return 0;
}