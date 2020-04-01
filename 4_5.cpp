#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<bitset>    //bitset<8>(c)
#include<typeinfo>  //typeid(i).name()
using namespace std;

int joseph(int n, int m){
    return n==1 ? 0 : (joseph(n-1, m)+m)%n;
}
int main(){
	int m,n;
    cin>>n>>m;
//    cout<<joseph(n, m) +1;
    vector<bool> s(n, 1);
    int dead(0), cnt(0);
    auto it=s.begin();
    while(dead < n-1){
        if(it == s.end())   it = s.begin();
        if(*it) cnt++;
        if(cnt == m){
            *it = 0;
            cnt = 0;
            dead++;
        }
        it++;
    }
    cout<<&it<<endl;
    it=find(s.begin(), s.end(), 1);
    cout<<it-s.begin()+1;
	return 0;
}