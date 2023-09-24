#include <iostream>
using namespace std;

void findAreaPerimeterSquare(int side) {
  int area = side * side;
  int perimeter = 4 * side;

  cout << "Area of Square = " << area << endl;
  cout << "Perimeter of Square = " << perimeter << endl;  
}

void findAreaPerimeterRectangle(int length, int breadth) {
  int area = length * breadth;
  int perimeter = 2 * (length + breadth);

  cout << "Area of Rectangle = " << area << endl;
  cout << "Perimeter of Rectangle = " << perimeter << endl;
}

void findAreaPerimeterCircle(int radius) {
  float PI = 3.14;
  
  float area = PI * radius * radius;
  float perimeter = 2 * PI * radius;

  cout << "Area of Circle = " << area << endl;
  cout << "Perimeter of Circle = " << perimeter << endl;
}

void findAreaPerimeterTriangle(int a, int b, int c) {
  float s = (a + b + c) / 2.0;
  float area = sqrt(s * (s - a) * (s - b) * (s - c));

  int perimeter = a + b + c;

  cout << "Area of Triangle = " << area << endl;
  cout << "Perimeter of Triangle = " << perimeter << endl; 
}

int main() {
  int side = 5;
  findAreaPerimeterSquare(side);

  int length = 10, breadth = 5;
  findAreaPerimeterRectangle(length, breadth);

  int radius = 7;
  findAreaPerimeterCircle(radius);

  int a = 3, b = 4, c = 5;
  findAreaPerimeterTriangle(a, b, c);

  return 0;
}
