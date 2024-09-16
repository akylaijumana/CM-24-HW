#include <iostream>
using namespace std;

int main() {
    double epsilon = 1.0;
    while (1.0 + epsilon > 1.0) {
        epsilon /= 2.0;
    }
    cout << "Machine Epsilon for float64: " << epsilon <<endl;
    
    return 0;
}
