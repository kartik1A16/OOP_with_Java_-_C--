/*
1. Create overloaded functions area() for circle, rectangle, and triangle.
2. Create base class Shape with a virtual function display Area(), and derived classes
   Circle, Rectangle implementing it differently.
*/

/*#include <iostream>
using namespace std;

int area(int radius)
{
    return 3.14 * radius * radius;
}

int area(int length,int breadth)
{
   return length*breadth;
}

float area(float base,float height)
{
  return 0.5*base*height;
}

int main()
{
    cout<<endl;
    cout<<"Area of Circle: "<<area(5)<<endl;
    cout<<"Area of Rectangle: "<<area(4,6)<<endl;
    cout<<"Area of Triangle: "<<area(4,5)<<endl;
    cout<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;
class Shape
{
public:
      virtual void displayArea()=0;  
};

class Circle : public Shape
{
  float radius;
  public:
      Circle()
      {
        cout<<endl;
        cout<<"Enter radius of Circle: ";
        cin>>radius;
      }

      void displayArea() override
      {
        cout<<"Area Of Circle: "<<3.14*radius*radius<<endl;
      }
};

class Rectangle : public Shape
{
   float length,breadth;

   public:
      Rectangle()
      {
        cout<<"Enter length and breadth of Rectangle: ";
        cin>>length>>breadth;
      }

      void displayArea() override
      {
        cout<<"Area Of Rectangle: "<<length*breadth<<endl;
        cout<<endl;
      }
};

int main()
{
    Shape *shape;
    Circle c;
    Rectangle r;
    
    shape=&c;
    shape->displayArea();

    shape=&r;
    shape->displayArea();

    return 0;
}
