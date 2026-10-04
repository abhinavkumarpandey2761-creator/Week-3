#include <iostream>


class Counter {
private:
    int count;

public:
  
    Counter() : count(0) {}

   
    void increment() {
        count++;
    }


    void reset() {
        count = 0;
    }

   
    int get() const {
        return count;
    }
};

int main() {
    Counter counters[3];

   
    counters[0].increment();
    counters[0].increment();


    counters[1].increment();
    counters[1].increment();
    counters[1].increment();
    counters[1].reset(); 

    counters[2].increment();

    std::cout << "--- Final Counter Values ---" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Counter [" << i << "]: " << counters[i].get() << std::endl;
    }

    return 0;
}
