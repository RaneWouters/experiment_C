#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<bitset>    //bitset<8>(c)
#include<typeinfo>  //typeid(i).name()
using namespace std;
vector<bool> s;
vector<bool>::iterator location(vector<bool>::iterator temp){
    while(!*temp){
        temp++;
        if(temp == s.end())
            temp= s.begin();
    }
    return temp;
}
int main(){
	int m,n;
    cin>>n>>m;
    for(int q=0; q<n; q++)
        s.push_back(1);
    int dead(0), cnt(0);
    auto it=s.begin();
    while(dead < n-3){
        if(it == s.end())   it = s.begin();
        if(*it) cnt++;
        if(cnt == m){
            *it = 0;
            auto temp = it;
            if(it+1 == s.end()){
                temp = s.begin();
                temp = location(temp);
                *temp = 0;
                temp++;
                temp = location(temp);
                *temp = 0;
                it = temp;
            }else if(it+1 == s.end()){
                temp = location(temp);
                *temp = 0;
                temp = location(temp);
                *temp = 0;
                it = temp;
            }else{
                temp = location(temp);
                *temp = 0;
                temp = location(temp);
                *temp = 0;
                it = temp;
            }
            cnt = 0;
            dead+=3;
        }
        it++;
    }
    for(auto q=s.begin(); q!=s.end(); q++){
        if(*q){
            cout<<q-s.begin()+1<<' ';
        }
    }
	return 0;
}