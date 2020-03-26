#include<iostream>
#include<cstdio>
#include<cstring>
#include<bitset>    //bitset<8>(c)
#include<typeinfo>  //typeid(i).name()
using namespace std;

int main() {
	char c;
	int flag(1);		//flag置 1 时，输入不合法，进行异常处理
	int s[10]={0};
	int row(0), word(0), character(0);
	c = cin.get();
	while (c != EOF) {
		switch (c) {
			case '\n':
				row++;
				character++;
				if(flag == 0){
					word++;
					flag=1;
				}
				break;
			case ' ':case '\t':
				character++;
				if(flag == 0){
					word++;
					flag=1;
				}
				break;
			default:
				character++;
				flag=0;
				break;
		}
		c=cin.get();
	}
	cout << "Number_row=" << '\t' << row << '\n';
	cout << "Number_word=" << '\t' << word << '\n';
	cout << "Number_character=" << '\t' << character << '\n';
	system("pause");
	return 0;
}