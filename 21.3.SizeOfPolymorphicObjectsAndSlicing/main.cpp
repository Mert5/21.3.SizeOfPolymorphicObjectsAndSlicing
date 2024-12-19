#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o

int main(){

    // Comparing object sizes
    std::cout << "sizeof(shape) : " << sizeof(Shape) << std::endl;      // dynamic : 40, static : 32
    std::cout << "sizeof(oval) : " << sizeof(Oval) << std::endl;        // dynamic : 56, static : 48
    std::cout << "sizeof(circle) : " << sizeof(Circle) << std::endl;    // dynamic : 56, static : 48

    // In dynamic polymorphism objects are larger than static polymorphism
    // because the compiler must keep track of information 
    // to dynamically resolve virtual func. calls


    // Slicing
    Circle circle1(5.4,"Circle");
    Shape shape1 = circle1;  // it slices the circle part
    shape1.draw(); // Shape::draw 

    Oval oval1(3.2,4.7,"Oval");
    shape1 = oval1;
    shape1.draw();

    return 0;
}