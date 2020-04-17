#include "rect.h"
Rectangle::Rectangle(int left, int top, int right, int bottom) :
    m_left(left), m_right(right), m_top(top), m_bottom(bottom) {}

Rectangle::Rectangle(const Rectangle &rhs) {
    this->m_left = rhs.m_left;
    this->m_right = rhs.m_right;
    this->m_bottom = rhs.m_bottom;
    this->m_top = rhs.m_top;
}
void Rectangle::show() {
    cout << "left-top point is (" << m_left
        << "," << m_top << ")" << '\n';
    cout << "right-bottom point is (" << m_right
        << "," << m_bottom << ")" << '\n';
}
void Rectangle::assign(int left, int top, int right, int bottom) {
    m_left = left;
    m_right = right;
    m_top = top;
    m_bottom = bottom;
}
int Rectangle::area() {
    return (m_right - m_left)*(m_bottom - m_top);
}
int Rectangle::perimeter() {
    return 2*((m_right - m_left)+(m_bottom - m_top));
}