#include<iostream>
#include<vector>
using namespace std;
class Set {
    private:
        vector<char> m_elems;
    public:
        Set() =default;
        Set(const vector<char> &elem);
        Set(const Set &s);
        
        bool is_elem(char);
        void insert(char);
        void erase(char);
        
        Set common(const Set &s);
        Set sum(const Set &s);
        Set& operator =(const Set &s);
        friend ostream& operator<<(ostream &os,const Set &s);
};