/*
 * Polymorphism (Compile-time and Runtime)
Topic: Method Overloading and Method Overriding
Objective: To demonstrate compile-time and runtime polymorphism.
Problem Statement:
1. Create overloaded methods area() for circle, rectangle, and triangle.
2. Create base class Shape and derived classes Circle and Rectangle that override the 
draw() method.
Use dynamic method dispatch to call the correct version at runtime.
Concepts Covered: Method Overloading, Method Overriding, Dynamic Method Dispatch
 */

//Class to showcase compile-time polymorphism
class Areas{
    // Overloaded method to calculate area of a circle
    double area(double radius){
        return Math.PI*radius*radius;
    }

    // Overloaded method to calculate area of a rectangle
    double area(double length, double breadth){
        return length*breadth;
    }

    // Overloaded method to calculate area of a triangle
    double area(double base, double height, boolean isTriangle){
        return 0.5*base*height;
    }
}

class Shape{
    // Base class method
    void draw(){
        System.out.println("Drawing...");
    }
}

class Circle extends Shape{
    @Override
    // Overridden method for Circle
    void draw(){
        System.out.println("Drawing a Circle...");
    }
}

class Rectangle extends Shape{
    @Override
    // Overridden method for Rectangle
    void draw(){
        System.out.println("Drawing a Rectangle...");
    }
}

class Polymorphism{
    public void main(String args[]){
        System.out.println("Compile time polymorphism");
        Areas a = new Areas();
        // Calling overloaded methods
        System.out.println("Area of Circle: "+a.area(2.5));
        System.out.println("Area of Rectangke: "+a.area(5.2,10.4));
        System.out.println("Area of Triangle: "+a.area(6.4,5.7,true));

        System.out.println("Run time polymorphism");

        Shape s; // Reference variable of parent class
        s=new Shape();
        s.draw();

        s=new Circle(); // Object of Circle
        s.draw();

        s=new Rectangle(); // Object of Rectangle
        s.draw();
    }
}