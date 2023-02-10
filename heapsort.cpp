#include <iostream>
#include <vector>

int upProcess(std::vector<int> &array, int k) {
    int k_parent;
    if (k % 2 == 0) {
        k_parent = (k - 2) / 2;
    } else {
        k_parent = (k - 1) / 2;
    }
    if (array.at(k) > array.at(k_parent)) {
        std::swap(array.at(k), array.at(k_parent));
    }
    return k_parent;
}

void heapSort(std::vector<int> &array) {
    if(array.empty()) {
        return;
    }

    // maximnal root heap
    for(int current = array.size() - 1; current > 0;) {
        // upProcess and place largest to end
        int k = current;
        while ( k > 0) {
            k = upProcess(array, k);
        }
        // put the maximal to end
        std::swap(array.at(0), array.at(current));
        --current;
        // put the end to head
        std::swap(array.at(current), array.at(0));
    }
}

int main(int argc, char const *argv[])
{
    std::vector<int> array({3, 1, 5, 6});
    heapSort(array);
    for(int i = 0; i < array.size(); ++i) {
        std::cout << array[i] << std::endl;
    }
    return 0;
}
