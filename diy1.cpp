#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle() : length(1.0), width(1.0) {}

    
    Rectangle(double l, double w) {
        setLength(l);
        setWidth(w);
    }

    
    void setLength(double l) {
        if (l < 0) {
            throw std::invalid_argument("Length cannot be negative.");
        }
        length = l;
    }

    
    void setWidth(double w) {
        if (w < 0) {
            throw std::invalid_argument("Width cannot be negative.");
        }
        width = w;
    }

    
    double getLength() const {
        return length;
    }

    
    double getWidth() const {
        return width;
    }

    
    double area() const {
        return length * width;
    }

    
    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    try {
        
        std::cout << "Creating a valid 5.0 x 3.5 rectangle:\n";
        Rectangle rect(5.0, 3.5);
        
        std::cout << "Length: " << rect.getLength() << "\n";
        std::cout << "Width: " << rect.getWidth() << "\n";
        std::cout << "Area: " << rect.area() << "\n";
        std::cout << "Perimeter: " << rect.perimeter() << "\n\n";

        
        std::cout << "Changing width to 4.0...\n";
        rect.setWidth(4.0);
        std::cout << "New Area: " << rect.area() << "\n\n";

        
        std::cout << "Attempting to set a negative length:\n";
        rect.setLength(-2.0);
        
    } catch (const std::invalid_argument& e) {
        
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
