#include <iostream>
using namespace std;

struct Rectangle {
    int length, width;
};

// Overloading the == operator
bool operator==(const Rectangle& r1, const Rectangle& r2) {
    if (r1.length == r2.length && r1.width == r2.width)
        return "The rectangles are equal";
    else
        return "The rectangles are not equal";
}

int main() {
    Rectangle rect1 = {5, 10};
    Rectangle rect2 = {5, 10};
    Rectangle rect3 = {6, 8};
    
    cout << rect1 == rect2 << endl;
    cout << rect2 == rect3 << endl;
    cout << rect1 == rect3 << endl;
}
