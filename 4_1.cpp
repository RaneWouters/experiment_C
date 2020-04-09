#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int number;
    cin>>number;
    while(number){
        s.push(number%2);
        number /= 2;
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}