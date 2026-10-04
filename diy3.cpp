#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}

  
    void setData(double r, double i) {
        real = r;
        imag = i;
    }


    void display() const {
        if (imag >= 0) {
            std::cout << real << " + " << imag << "i" << std::endl;
        } else {
            std::cout << real << " - " << -imag << "i" << std::endl; 
        }
    }
};

int main() {

    const int SIZE = 3;
    Complex numbers[SIZE];

    numbers[0].setData(3.5, 4.5);
    numbers[1].setData(-2.0, 7.1);
    numbers[2].setData(1.5, -3.2);

   
    std::cout << "Displaying the array of complex numbers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Complex Number " << i + 1 << ": ";
        numbers[i].display();
    }

    return 0;
}
