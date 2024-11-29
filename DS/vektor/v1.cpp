// comparing size, capacity and max_size
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector; // prazan vektor, vel = 0, kap = 0
    //std::vector<int> myvector2(100); // vektor za 100 el
    std::cout << "size: " << (int) myvector.size() << '\n';
    std::cout << "capacity: " << (int) myvector.capacity() << '\n';
    std::cout << "max_size: " << (int) myvector.max_size() << '\n';
    // set some content in the vector:
    for (int i=0; i<100; i++) 
        myvector.push_back(i);

    for (int i=0; i<100; i++) 
        std::cout << myvector[i] << ' ';
    std::cout << '\n';
    /* for (int i=0; i<100; i++) {
        std::cout << myvector.back() << ' ';
        myvector.pop_back();
    } */

    std::cout << "size: " << (int) myvector.size() << '\n';
    std::cout << "capacity: " << (int) myvector.capacity() << '\n';
    std::cout << "max_size: " << (int) myvector.max_size() << '\n';
    return 0;
}