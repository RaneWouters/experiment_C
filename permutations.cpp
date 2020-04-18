#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int g_size;
void swap(char &a, char &b){
    char temp;
    temp = a;
    a = b;
    b = temp;
}
void F(char s[], int begin, int end){
    if(begin == end){
        for(int q = 0; q<g_size; q++){
            cout<<s[q];
        }
        cout<<endl;
    }
    else{
        for(int q = begin; q <end; q++){
            swap(s[q], s[begin]);
            F(s, begin+1, end);
            swap(s[q], s[begin]);
        }
    }
}

int main() {
    char s[10];
    cin>>s;
    g_size = strlen(s);
    F(s, 0, g_size);
    return 0;
}