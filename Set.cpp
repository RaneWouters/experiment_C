#include"Set.h"
Set::Set(const vector<char> &elem){
    this->m_elems = elem;
}
Set::Set(const Set &s){
    this->m_elems = s.m_elems;
}
bool Set::is_elem(char c){
    for(auto it = this->m_elems.begin();
        it != this->m_elems.end(); ++it){
            if(*it == c)    return true;
        }
    return false;
}

void Set::insert(char c){
    this->m_elems.push_back(c);
}
void Set::erase(char c){
    for(auto it = this->m_elems.begin();
        it != this->m_elems.end(); ++it){
            if(*it == c){
                this->m_elems.erase(it);
                return ;
            }
        }
}

ostream& operator<<(ostream &os,const Set &s){
    for(auto it = s.m_elems.begin();
        it != s.m_elems.end(); ++it){
            os<<*it<<' ';
        }
    return os;
}

Set& Set::operator=(const Set &s){
    this->m_elems = s.m_elems;
    return *this;
}
Set Set::common(const Set &s){
    Set temp;
    for(auto it = this->m_elems.begin();
        it != this->m_elems.end(); ++it){
            for(auto q = s.m_elems.begin();
                q != s.m_elems.end(); q++){
                    if(*it == *q)
                        temp.m_elems.push_back(*it);
                }
        }
    return temp;
}
Set Set::sum(const Set &s){
    Set temp;
    temp.m_elems = this->m_elems;
    for(auto it = s.m_elems.begin();
        it != s.m_elems.end(); ++it){
            int flag = 1;
            for(auto q = this->m_elems.begin();
                q != this->m_elems.end(); ++q){
                    if(*it == *q)   flag = 0;
                }
            if(flag)    temp.m_elems.push_back(*it);
        }
    return temp;
}
