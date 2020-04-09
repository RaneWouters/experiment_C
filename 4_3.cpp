#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {
    vector<vector<int> > s(5,vector<int>(5));
    int value=1;
    for(auto q=s.begin(); q!=s.end(); q++){
        for(auto a=q->begin(); a!=q->end(); a++){
            *a = value++;
        }
    }
    int location=1;
    for(auto q=s.begin(); q!=s.end(); q++, location++){
        for(auto a=q->begin()+location; a!=q->end(); a++){
            *a =0;
        }
    }
    for(auto q=s.begin(); q!=s.end(); q++){
        for(auto a=q->begin(); a!=q->end(); a++){
            cout<<*a<<'\t';
        }
        cout<<endl;
    }
    return 0;
}