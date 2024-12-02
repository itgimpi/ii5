// vector::shrink_to_fit
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector (100);
    std::cout << "1. capacity of myvector: " << myvector.capacity() << '\n';
    std::cout << "1. size of myvector: " << myvector.size() << '\n';

    myvector.resize(10);
    std::cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
    std::cout << "2. size of myvector: " << myvector.size() << '\n';

    myvector.shrink_to_fit();
    std::cout << "3. capacity of myvector: " << myvector.capacity() << '\n';
    std::cout << "3. size of myvector: " << myvector.size() << '\n';

    return 0;
}