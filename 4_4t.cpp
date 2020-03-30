#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>    //bitset<8>(c)
#include<typeinfo>  //typeid(i).name()
using namespace std;

int main(){
	string temp;
	string carray;
    int is_palindrome = 1;
	cout<<"Please input a string ..\n";
	getline(cin, temp);
    
	for(auto q=temp.begin(); q!=temp.end(); q++){
        if(*q >= 'a' && *q <= 'z' || *q >= 'A' && *q <= 'Z'){
			carray.push_back(*q);
		}
	}	//get letters
	for(auto q=carray.begin(); q!=carray.end(); q++){
        if(*q >= 'A' && *q <= 'Z'){
            *q ^= 32;
        }
	}	//captial and small letters switch
    temp.clear();
    temp= carray;
    reverse(carray.begin(),carray.end());
    if(temp != carray)  is_palindrome = 0;  //determine is_palindrome
	
    if(is_palindrome) 	cout<<"The string is a palindrome\n";
	else 				cout<<"The string isn't a palindrome\n";
	return 0;
}