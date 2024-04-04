/* AI소프트웨어학과 2024591005 김성혁 */
#include <iostream>
using namespace std;

class Oval {
    public:
        int width;
        int height;
        int getWidth();
        int getHeight();
        void set(int w, int h);
        void show();
        Oval();
        Oval(int w, int h);
        ~Oval();
};

int Oval::getWidth() {
    return width;
}

int Oval::getHeight() {
    return height;
}

void Oval::set(int w, int h) {
    width = w;
    height = h;
}

void Oval::show() {
    cout << "width = " << width << ", ";
    cout << "height = " << height << endl;
}

Oval::Oval() {
    width = 1;
    height = 1;
}

Oval::Oval(int w, int h) {
    width = w;
    height = h;
}

Oval::~Oval() {
    cout << "Oval 소멸 : " << "width = " << width << "," << "height = " << height << endl;
}

int main(void) {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout<<b.getWidth()<<", "<<b.getHeight()<<endl;
    return 0;
}