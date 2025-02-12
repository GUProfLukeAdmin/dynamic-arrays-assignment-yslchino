#include <vector>
#include <iostream>
using namespace std;

void part1() {
    vector<int> vec;

    //Add 50,000 integers to the vector
    for (int i = 0; i < 50000; i++) {
        vec.push_back(i);
    }
    cout << "After adding elemtemts to the vector: Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;

    //Resize vector to half of its size
    vec.resize(vec.size() / 2);
    cout << "After resizing the vector to half of its size: Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;

    //Shrink the vector to fit its size
    vec.shrink_to_fit();
    cout << "After shrinking the vector to fit its size: Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;


}


void part2() {
    vector<bool> boolVec(10000);
    vector<char> charVec(10000);

    size_t boolMemoryUsage = boolVec.capacity() / 8; // Because each bool takes 1 bit
    size_t charMemoryUsage = charVec.size() * sizeof(char);

    cout << "Memory usage of vector<bool>: " << boolMemoryUsage << " bytes" << endl;
    cout << "Memory usage of vector<char>: " << charMemoryUsage << " bytes" << endl;
}

int main() {
    part1();
    part2();
    return 0;
}