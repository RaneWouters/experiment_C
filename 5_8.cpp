#include<iostream>
using namespace std;
double P(double n, double val){
    if(n == 0)  return 1;
    if(n == 1)  return val;
    return ((2*n-1)*P((n-1),val)-(n-1)*P((n-2),val))/n;
}
int main(){
    double n, val;
    cin>>n>>val;
    cout<<P(n, val);
    return 0;
}