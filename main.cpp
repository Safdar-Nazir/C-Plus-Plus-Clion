#include <iostream>

using namespace std;

class BasicIO {
public:
    void Basic() {
        //Just Output
        std::cout << "Hello, World!" << std::endl;

        //Input and Output
        int a;
        std::cout << "Please Enter an Integer Value: ";
        std::cin >> a;
        std::cout << "Here is what you have typed: " << a << std::endl;

        //Taking two inputs in a Single Line
        int x, y;
        std::cout << "Enter two Integer Values: ";
        std::cin >> x >> y;
    }

};

int main() {


    BasicIO obj;

}
