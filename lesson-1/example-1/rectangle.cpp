#include <iostream>
using namespace std;

struct  Rectangle {
   int heigh;
   int width;
   Rectangle();
  ~Rectangle();
   long Area();
   int Perimeter();
};  

Rectangle::Rectangle() : heigh{0}, width{0}
{
    cout << "\nThis is a Rectangle constructor\n";
} 

Rectangle::~Rectangle()
{
    cout << "\nThis is a Rectangle destructor\n";
} 

long Rectangle::Area()
{
    return heigh * width;
}

int Rectangle::Perimeter()
{
   return heigh + width;
}

int main()
{
    {
        Rectangle rec1;

        cout << "Enter height of the rectangle:";
        cin >> rec1.heigh;
        cout << "Enter width of the rectangle:";
        cin >> rec1.width;

        cout << "\nArea of the rectangle equals:" <<  rec1.Area();
        cout << "\nPerimeter of the rectangle equals:" <<  rec1.Perimeter();
    }

    cout << "\nRectangle object is destroyed\n";
    return 0;
}

