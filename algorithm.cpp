#include <vector>
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::vector<int> arr{1,2,3};
    std::transform(arr.begin(), arr.end(), arr.begin(), [](int x){return x+1;});
    for(const int &a : arr)
    {
        std::cout << a << std::endl;
    }
    return 0;
}
