#include<iostream>
#include<cstdio>
#include<cstring>
#include<bitset>    //bitset<8>(c)
#include<typeinfo>  //typeid(i).name()
using namespace std;

const int SIZE = 100;

int main(){
	char temp[SIZE];
	int i,len,is_palindrome = 1;
	cout<<"Please input a string ..\n";
	cin.get(temp,SIZE);
	len = strlen(temp);
	
	char carray[len];
	for(int q=0,location=0; q<len; q++){
		if(temp[q] >= 'a' && temp[q] <= 'z' || temp[q] >= 'A' && temp[q] <= 'Z'){
			carray[location++] = temp[q];
		}
	}
	len = strlen(carray);
	for(int q=0; q<len; q++){
		if(carray[q] >= 'A' && carray[q] <= 'Z')
			carray[q] ^= 32;
	}

	for(i=0;i<len/2;i++){
		if(carray[i]!=carray[len-1-i]){
			is_palindrome=0;
			break;
		}
	}
	if(is_palindrome) 	cout<<"The string is a palindrome\n";
	else 				cout<<"The string isn't a palindrome\n";
	return 0;
}