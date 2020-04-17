#include "rect.h"
#include <stdlib.h>
int main() {
    Rectangle rect;
    rect.show();
    rect.assign(100, 200, 300, 400);
    rect.show();
/*
    Rectangle rect1(0, 0, 200, 200);
    rect1.show();
    rect1.assign(100, 200, 300, 400);
    cout << "Area of rect:" << rect.area()
        << " Perimeter of rect:" << rect.perimeter() << endl;
    system("pause");
*/
    cout<<endl;
    Rectangle rect1(rect);
    rect1.show();
    return 0;
}