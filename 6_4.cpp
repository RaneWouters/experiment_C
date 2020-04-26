#include "set.h"
int main() {
    vector<char> temp1 = {'a','s','d','f','g'};
    vector<char> temp2 = { 'a','c','v','f','t','y','e','r' };
    Set s1(temp1), s2(temp2),s3,s4;
    cout<<s1.is_elem('a')<<endl;
    s1.insert('p');
    cout << "s1={"<<s1<<"}"<<endl;
    s2.erase('t');
    cout << "s2={" << s2 <<"}" << endl;
    cout<<s2<<endl;
    s3=s1.common(s2);
    s4=s1.sum(s2);
    cout << "s3={"<<s3 <<"}"<< endl;
    cout << "s4={" << s4 << "}"<<endl;
    Set s5(s1);
    cout << "s5={" << s5 << "}"<<endl;
    s5 = s4;
    cout << "s5={" << s5 << "}"<<endl;
    return 0;
}