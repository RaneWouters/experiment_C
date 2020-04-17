#include<iostream>
using namespace std;
class Complex {
    public:
        Complex(){
            Complex::count++;
            cout<<Complex::count<<endl;
        };

        Complex(double real, double imag) : m_real(real), m_imag(imag){
            Complex::count++;
            cout<<Complex::count<<endl;
        }
        Complex(const Complex &obj) : m_real(obj.m_real), m_imag(obj.m_imag){
            Complex::count++;
            cout<<Complex::count<<endl;
        }
        ~Complex(){}

        static int count;
        double real() { return m_real; }
        double imag() { return m_imag; }
        void set(double, double);
        friend ostream& operator<<(ostream &os,const Complex &rhs){
            os<<"m_real = "<<rhs.m_real<<endl;
            os<<"m_imag = "<<rhs.m_imag<<endl;
            return os;
        };
        friend Complex operator+(const Complex &a, const Complex &b){
            Complex Complex;
            Complex.m_real = a.m_real + b.m_real;
            Complex.m_imag = a.m_imag + b.m_imag;
            return Complex;
        }
        friend Complex operator-(const Complex &a, const Complex &b){
            Complex Complex;
            Complex.m_real = a.m_real - b.m_real;
            Complex.m_imag = a.m_imag - b.m_imag;
            return Complex;
        }
        friend Complex operator*(const Complex &a, const Complex &b){
            Complex Complex;
            Complex.m_real = a.m_real * b.m_real - a.m_imag * b.m_imag;
            Complex.m_imag = a.m_real * b.m_imag + a.m_imag * b.m_real;
            return Complex;
        }
        friend Complex operator/(const Complex &a, const Complex &b){
            Complex Com;
            Com.m_real = a.m_real * b.m_real + a.m_imag * b.m_imag;
            Com.m_real /= (a.m_imag * a.m_imag + b.m_imag * b.m_imag);
            Com.m_imag = a.m_imag * b.m_real - a.m_real * b.m_imag;
            Com.m_imag /= (a.m_imag * a.m_imag + b.m_imag * b.m_imag);
            return Com;
        }
        void operator=(const Complex &a){
            this->m_real = a.m_real;
            this->m_imag = a.m_imag;
        }
        bool operator==(const Complex &a){
            if(this->m_real == a.m_real && this->m_imag ==a.m_imag)
                return 1;
            return 0;
        }
        bool operator!=(const Complex &a){
            if(this->m_real == a.m_real && this->m_imag ==a.m_imag)
                return 0;
            return 1;
        }
    private:
        double m_real;
        double m_imag;
};
void Complex::set(double real, double imag){
    this->m_real = real;
    this->m_imag = imag;
}
int Complex::count = 0;
int main(){
    Complex Com(3, 2);
    Complex Com1(8 ,5);
    cout<<(Com + Com1)<<endl;
    cout<<(Com - Com1)<<endl;
    cout<<(Com * Com1)<<endl;
    cout<<(Com / Com1)<<endl;
    Com = Com1;
    cout<<Com<<endl;
    cout<<(Com == Com1)<<endl;
    cout<<(Com != Com1)<<endl;
    return 0;
}