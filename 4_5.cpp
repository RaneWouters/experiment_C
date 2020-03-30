#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<bitset>    //bitset<8>(c)
#include<typeinfo>  //typeid(i).name()
using namespace std;

int joseph(int n, int m){
    return n==1 ? 0 : (joseph(n-1, m)+m)%n;
}
int main(){
	int m,n;
    cin>>n>>m;
    cout<<joseph(n, m) +1;
	return 0;
}